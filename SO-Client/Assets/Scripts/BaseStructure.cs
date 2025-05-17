using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BaseStructure : MonoBehaviour
{
    public int playerControl;
    public MasterGrid masterGrid;
    public Vector2Int pos;
    public int structureType; //0: resource, 1: factory, 2: airport, 5:command
    public int gamePieceId;
    public BoxCollider2D spriteCollider;
    public GameMaster gameMaster;
    public int captureHealth;
    public int maxCaptureHealth;
    public TextMeshPro healthTextContainer;
    public GameObject healthCanvas;
    //private Color baseColor;
    public StaticSprite neutralSpriteContainer;
    public SpriteRenderer neutralSpriteFill;
    public SpriteRenderer hammerSprite;
    public CanvasGroup incomeAnimationCanvasGroup;
    public TMP_Text incomeAnimationText;
    public GameObject incomeAnimationSprite;

    public StaticSprite progeny0CaptureSpriteContainer;
    public StaticSprite progeny1CaptureSpriteContainer;
    public StaticSprite progeny2ResourceCaptureSpriteContainer;
    public StaticSprite progeny2ProductionCaptureSpriteContainer;






    // Start is called before the first frame update
    protected virtual void Start()
    {
        gamePieceId = 200 + structureType; //structure ids start at 200.
        pos = new Vector2Int((int)transform.position.x, (int)transform.position.y);
        //private GameObject boxColliderComponent;
        gameMaster = GameObject.FindGameObjectWithTag("GameMasterTag").GetComponent<GameMaster>();
        maxCaptureHealth = 200;
        captureHealth = maxCaptureHealth;
        masterGrid = GameObject.FindGameObjectWithTag("MasterGridTag").GetComponent<MasterGrid>();
        masterGrid.setStructureInGrid(pos, this);


        //baseColor = neutralSpriteFill.color;
        //turnOffCaptureSprites();
/*        if (structureType != 200)
                setColor(neutralSpriteFill);
        if (playerControl != 0)*/
        setCaptureSpritesAndColor();


        if (IsCoveredByUnit())
            turnOffCollider();

        //healthTextContainer = GetComponentInChildren<TextMeshProUGUI>();

        /*if (healthTextContainer != null)
        {
            setCaptureHealth(maxCaptureHealth);
        }*/
        /*        if (structureType == 5)
                {
                    MasterGrid.commandStructures[playerControl] = this;
                }*/
        incomeAnimationText.GetComponent<RectTransform>().sizeDelta = new Vector2(0.7f, 0.4f);
        incomeAnimationSprite.GetComponent<RectTransform>().sizeDelta = new Vector2(0.2f, 0.2f);

    }

    



    public bool isCapturableBy(BaseUnit unit)
    {
        //"resource" probably shouldn't be hardcoded here. Should it instead reference the 1st item in the GameValuesSO unitTypes array?
        //What if I want to change the unitTypes array? Should I just have a "is resource unit" flag?
        return (unit.playerControl != playerControl && unit.isResourceUnit);  
    }

    public IEnumerator switchAlliance(int capturePlayerInt)
    {
        yield return StartCoroutine(AnimateCaptureHealth(captureHealth, 0));
        yield return new WaitForSeconds(GameMaster.globalAnimationDuration / 3);
        if (structureType == 5 && playerControl != capturePlayerInt)
            gameMaster.ConcedePlayer(playerControl);

        playerControl = (byte)capturePlayerInt;
        resetCaptureHealth();
        setCaptureSpritesAndColor();
    }


    public void setCaptureSpritesAndColor()
    {
        byte progeny = gameMaster.getPlayerProgeny((byte)playerControl);
/*        if (structureType == 0 && playerControl != 0)
        {
            Debug.Log($"Setting capture sprite for player {playerControl}, progeny: {progeny}, master grid says: {gameMaster.getPlayerProgeny(playerControl)}");
        }*/
        turnOffCaptureSprites();
        /*        if (structureType == 0)
                    setColor(neutralSpriteFill);*/
        if (playerControl != 0)
        {
            if (structureType != 5) {
                if (progeny == 0)
                {
                    if (structureType == 0)
                    {
                        /*                progeny0ResourceCaptureSpriteFillSR.gameObject.SetActive(true);
                                        progeny0ResourceCaptureSpriteTrimSR.gameObject.SetActive(true);
                                        progeny0ResourceCaptureSpriteLightsSR.gameObject.SetActive(true);*/
                        progeny0CaptureSpriteContainer.gameObject.SetActive(true);
                        //Debug.Log("Calling set color from baseStructure");
                        progeny0CaptureSpriteContainer.SetColor(playerControl, true, true);
                    }
                    else
                    {
                        if (neutralSpriteContainer != null)
                            neutralSpriteContainer.SetColor(playerControl, true, true);
                    }
                    //progeny0SpriteRenderer.gameObject.SetActive(true);
                }
                else if (progeny == 1)
                {
                    progeny1CaptureSpriteContainer.gameObject.SetActive(true);
                    progeny1CaptureSpriteContainer.SetColor(playerControl, true, true);
                    neutralSpriteContainer.SetColor(0, true, true);
                }
                else if (progeny == 2)
                {
                    if (IsProduction())
                    {
                        progeny2ProductionCaptureSpriteContainer.gameObject.SetActive(true);
                        progeny2ProductionCaptureSpriteContainer.SetColor(playerControl, true, true);
                        neutralSpriteContainer.SetColor((int)playerControl, true, true);
                        //neutralSpriteContainer.ToggleSprites(false);
                    }
                    else if (structureType == 0)
                    {
                        progeny2ResourceCaptureSpriteContainer.gameObject.SetActive(true);
                        progeny2ResourceCaptureSpriteContainer.SetColor(playerControl, true, true);

                        //setColor(neutralSpriteFill);
                    }
                }
                /*else if (gameMaster.getPlayerProgeny(playerControl) == 2)
                    Debug.LogError("Structure: Progeny 2 not yet implemented");
                */
                else
                    Debug.LogError($"No progeny for byte value {progeny} found, unable to set capture sprite");
            }        
        }
        else
        {
            //Debug.Log($"Player is 0 for structure {this.name}");
            neutralSpriteContainer.SetColor(0, true, true);
        }

    }

    public IEnumerator captureByPercentage(int percentCapturing, int playerCapturing)
    {
        //int prevCaptureHealth = captureHealth;
        if (playerCapturing != playerControl)
        {
            StartCoroutine(AnimateCapture());
            if (percentCapturing < captureHealth)
                SetCaptureHealth(captureHealth - percentCapturing);
            else
                yield return StartCoroutine(switchAlliance(playerCapturing));
            //Debug.Log("capture newHealth: " + captureHealth + "selectedUnithealth " + percentCapturing);
        }else
            Debug.LogError("Player " + playerCapturing + " tried to capture their own structure");
        yield return null;
    }

    public void SetCaptureHealth(int newHealth)
    {
        
        int previousCaptureHealth = captureHealth;
        captureHealth = newHealth;
        if (newHealth >= maxCaptureHealth)
        {
            captureHealth = maxCaptureHealth;
            healthCanvas.SetActive(false);
        }
        else
        {
            //captureHealth = newHealth;
            healthCanvas.SetActive(true);
        }
        StartCoroutine(AnimateCaptureHealth(previousCaptureHealth, newHealth));

        //healthTextContainer.text = captureHealth.ToString()+"/"+maxCaptureHealth.ToString();
    }

    private IEnumerator AnimateCaptureHealth(int from, int to)
    {
        if (to <= maxCaptureHealth)
        {

            float duration = GameMaster.globalAnimationDuration;
            //float halfDuration = totalDuration * 0.5f;
            int displayValue = from;

            // Phase 1: If coming down from full to 0 (before rising to new value)
            if (from > to && to < maxCaptureHealth)
            {
                float elapsed = 0f;
                while (elapsed < duration)
                {
                    elapsed += Time.deltaTime;
                    float t = Mathf.Clamp01(elapsed / duration);
                    displayValue = Mathf.RoundToInt(Mathf.Lerp(from, to, t));
                    healthTextContainer.text = displayValue + "/" + maxCaptureHealth;
                    yield return null;
                }
                displayValue = to;
            }
            healthTextContainer.text = to + "/" + maxCaptureHealth;
        }

        // Phase 2: Rise from current (0 or previous) to `to`
        /*{
            float elapsed = 0f;
            int riseFrom = displayValue;
            float riseDuration = (from >= maxCaptureHealth && to < maxCaptureHealth) ? halfDuration : totalDuration;

            while (elapsed < riseDuration)
            {
                elapsed += Time.deltaTime;
                float t = Mathf.Clamp01(elapsed / riseDuration);
                displayValue = Mathf.RoundToInt(Mathf.Lerp(riseFrom, to, t));
                healthTextContainer.text = displayValue + "/" + maxCaptureHealth;
                yield return null;
            }
        }*/

        // Final set to ensure accuracy
        
    }



    public IEnumerator AnimateCapture()
    {
        hammerSprite.gameObject.SetActive(true);

        Transform t = hammerSprite.transform;
        Vector3 startScale = new Vector3(0.01f, 0.01f, 1f);
        Vector3 peakScale = new Vector3(0.9f, 0.9f, 1f);
        float swoopDuration = GameMaster.globalAnimationDuration/8;
        float holdDuration = GameMaster.globalAnimationDuration *3/4;

        // Reset initial scale
        t.localScale = startScale;

        // Swoop in
        float elapsed = 0f;
        while (elapsed < swoopDuration)
        {
            elapsed += Time.deltaTime;
            float tLerp = Mathf.SmoothStep(0f, 1f, elapsed / swoopDuration);
            t.localScale = Vector3.Lerp(startScale, peakScale, tLerp);
            yield return null;
        }

        // Ensure it's fully scaled
        t.localScale = peakScale;

        // Hold at full size
        yield return new WaitForSeconds(holdDuration);

        // Swoop out
        elapsed = 0f;
        while (elapsed < swoopDuration)
        {
            elapsed += Time.deltaTime;
            float tLerp = Mathf.SmoothStep(0f, 1f, elapsed / swoopDuration);
            t.localScale = Vector3.Lerp(peakScale, startScale, tLerp);
            yield return null;
        }

        // Ensure fully shrunk and deactivate
        t.localScale = startScale;
        hammerSprite.gameObject.SetActive(false);
    }

    public IEnumerator AnimateIncome(int income)
    {
        incomeAnimationCanvasGroup.gameObject.SetActive(true);
        yield return new WaitForSeconds(GameMaster.swoopCardAnimationDuration);
        float duration = GameMaster.globalAnimationDuration*1.5f; // total time from bottom to top
        float fadeInTime = GameMaster.globalAnimationDuration/5f;
        float fadeOutTime = GameMaster.globalAnimationDuration / 5f;
        float startY = -0.35f;
        float endY = 0.25f;
        float elapsedTime = 0;
        RectTransform rectTransform = incomeAnimationCanvasGroup.GetComponent<RectTransform>();

        if (incomeAnimationCanvasGroup == null)
        {
            Debug.LogError("CanvasGroup reference is null!");
        }

        incomeAnimationCanvasGroup.alpha = 0f;
        incomeAnimationText.text = "+ " + income.ToString();
        while (elapsedTime < duration)
        {
            elapsedTime += Time.deltaTime;
            float t = Mathf.Clamp01(elapsedTime / duration);

            // Interpolate position
            float y = Mathf.Lerp(startY, endY, t);
            Vector3 pos = rectTransform.localPosition;
            rectTransform.localPosition = new Vector3(pos.x, y, pos.z);

            // Handle fade
            if (elapsedTime < fadeInTime)
            {
                incomeAnimationCanvasGroup.alpha = Mathf.InverseLerp(0, fadeInTime, elapsedTime);
            }
            else if (elapsedTime > duration - fadeOutTime)
            {
                incomeAnimationCanvasGroup.alpha = Mathf.InverseLerp(duration, duration - fadeOutTime, elapsedTime);
            }
            else
            {
                incomeAnimationCanvasGroup.alpha = 1f;
            }
            yield return null;
        }
        incomeAnimationCanvasGroup.gameObject.SetActive(false);

    }

    public void turnOffCaptureSprites()
    {
        if(neutralSpriteContainer != null)
            neutralSpriteContainer.ToggleSprites(true);
        //progeny0SpriteRenderer.gameObject.SetActive(false);
        //progeny1SpriteRenderer.gameObject.SetActive(false);
        if(progeny1CaptureSpriteContainer!=null)
            progeny1CaptureSpriteContainer.gameObject.SetActive(false);
        //progeny2SpriteRenderer.gameObject.SetActive(false);
        /*        progeny0ResourceCaptureSpriteFillSR.gameObject.SetActive(false);
                progeny0ResourceCaptureSpriteTrimSR.gameObject.SetActive(false);
                progeny0ResourceCaptureSpriteLightsSR.gameObject.SetActive(false);*/
        if(progeny0CaptureSpriteContainer!=null)
            progeny0CaptureSpriteContainer.gameObject.SetActive(false);
        if(progeny2ResourceCaptureSpriteContainer!=null)
            progeny2ResourceCaptureSpriteContainer.gameObject.SetActive(false);
        if(progeny2ProductionCaptureSpriteContainer!=null)
            progeny2ProductionCaptureSpriteContainer.gameObject.SetActive(false);
    }

    public void staticSpriteHasBeenClicked()
    {
        gameMaster.structureHasBeenClicked(this);
    }

    public void turnOnCollider()
    {
        spriteCollider.enabled = true;
    }

    public void turnOffCollider()
    {
        spriteCollider.enabled = false;
        //print("turned off collider for: " + this);
    }

    public void resetCaptureHealth()
    {
        //StartCoroutine(AnimateResetCaptureHealth());
        healthCanvas.SetActive(false);
        SetCaptureHealth(maxCaptureHealth);
    }

    public IEnumerator AnimateResetCaptureHealth()
    {
        float duration = 0.1f;
        //float halfDuration = totalDuration * 0.5f;
        int from = captureHealth;
        int to = maxCaptureHealth;
        int displayValue = from;

        // Phase 1: If coming down from full to 0 (before rising to new value)
        if (from > to && to < maxCaptureHealth)
        {
            float elapsed = 0f;
            while (elapsed < duration)
            {
                elapsed += Time.deltaTime;
                float t = Mathf.Clamp01(elapsed / duration);
                displayValue = Mathf.RoundToInt(Mathf.Lerp(from, to, t));
                healthTextContainer.text = displayValue + "/" + maxCaptureHealth;
                yield return null;
            }
            displayValue = to;
        }
        healthTextContainer.text = to + "/" + maxCaptureHealth;
    }

    public bool IsProduction()
    {
        return (!(structureType == 0 || structureType == 5));
    }

    public bool IsCoveredByUnit()
    {
        //Debug.Log($"Structure {pos} is covered by unit? {masterGrid.whatUnitIsInThisLocation(pos) != null}");
        return (masterGrid.whatUnitIsInThisLocation(pos) != null);
    }
}
