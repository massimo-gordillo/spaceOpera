using System.Collections;
using System.Collections.Generic;
using TMPro;

//using System.Drawing;
using UnityEngine;

public class MovementSquare : ClickableObject
{
    public MasterGrid mg;
    public SpriteRenderer sr;
    public Collider2D boxCollider2D;
    public SpriteRenderer stripeSprite;
    public GameObject shield1;
    public GameObject shield2;
    public GameObject shield3;
    /*    public List<Vector2Int> pointingTo = new List<Vector2Int>();
        public List<Vector2Int> pointedFrom = new List<Vector2Int>();
        public List<Vector2Int> pathToOrigin = new List<Vector2Int>();*/
    public Vector2Int parent;
    public int distanceFromOrigin;
    public TMP_Text distanceText;




    protected override void Start()
    {
        base.Start();
        //set opacity
        //SpriteRenderer sr = gameObject.GetComponent<SpriteRenderer>();
        Color color = sr.color;
        SetColor(new Color(color.r, color.b, color.g, 0.8f));
        sr.sortingLayerID = SortingLayer.NameToID("Drawing");
        //stripeSprite.gameObject.SetActive(false);
    }

    public override void HandleClick()
    {
        mg = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        if (mg != null
            && mg.gameMaster != null
            && mg.gameMaster.sequenceManager != null
            && !mg.gameMaster.sequenceManager.TryAcceptGuidedClickableClick(this))
        {
            return;
        }

        mg.MoveSelectedUnit(new Vector2Int((int)transform.position.x, (int)transform.position.y));
    }

    public void SetColor(Color c)
    {
        sr.color = c;
        Color shieldColor = new Color(c.r, c.b, c.g, 1.0f);
        //shield1.GetComponent<SpriteRenderer>().color = shieldColor;
        //shield2.GetComponent<SpriteRenderer>().color = shieldColor;
        //shield3.GetComponent<SpriteRenderer>().color = shieldColor;
    }

    Coroutine tutorialHighlightCoroutine;
    Color tutorialHighlightRestoreColor;
    const int TutorialHighlightFlashCount = 3;
    const float TutorialHighlightFlashStepSeconds = 0.1f;
    const float TutorialHighlightLoopPauseSeconds = 0.7f;

    /// <summary>Tutorial sequence: pulse overlay fill between current colour and white.</summary>
    public void SetTutorialHighlight(bool enabled)
    {
        if (enabled)
        {
            if (tutorialHighlightCoroutine != null)
            {
                return;
            }

            if (sr != null)
            {
                tutorialHighlightRestoreColor = sr.color;
            }

            tutorialHighlightCoroutine = StartCoroutine(TutorialHighlightFillFlashCoroutine());
        }
        else
        {
            if (tutorialHighlightCoroutine != null)
            {
                StopCoroutine(tutorialHighlightCoroutine);
                tutorialHighlightCoroutine = null;
            }

            SetColor(tutorialHighlightRestoreColor);
        }
    }

    IEnumerator TutorialHighlightFillFlashCoroutine()
    {
        if (sr == null)
        {
            tutorialHighlightCoroutine = null;
            yield break;
        }

        while (true)
        {
            Color baseFill = tutorialHighlightRestoreColor;
            for (int flash = 0; flash < TutorialHighlightFlashCount; flash++)
            {
                SetColor(Color.white);
                yield return new WaitForSeconds(TutorialHighlightFlashStepSeconds);
                SetColor(baseFill);
                yield return new WaitForSeconds(TutorialHighlightFlashStepSeconds);
            }

            yield return new WaitForSeconds(TutorialHighlightLoopPauseSeconds);
        }
    }

    public void ShowShields(int s)
    {
        shield1.SetActive(false);
        shield2.SetActive(false);
        shield3.SetActive(false);
        if (s < 0 || s > 3)
            Debug.LogWarning("incorrect number of shields shown");
        else
        {
            if (s >= 1)
                shield1.SetActive(true);
            if (s >= 2)
                shield2.SetActive(true);
            if (s >= 3)
                shield3.SetActive(true);
        }
    }
}
