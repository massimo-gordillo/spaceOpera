using UnityEngine;
using System.Collections;

namespace SlimUI.ModernMenu{
	public class CheckMusicVolume : MonoBehaviour {
		public void  Start (){
			// remember volume level from last time
/*			GetComponent<AudioSource>().volume = PlayerPrefs.GetFloat("MusicVolume");
			Debug.Log($"Setting music volume to: {PlayerPrefs.GetFloat("MusicVolume")}");*/
			StartCoroutine(WaitStart());
        }

		public IEnumerator WaitStart()
		{
			// wait for the scene to load before setting the volume
			yield return null;
			GetComponent<AudioSource>().volume = PlayerPrefs.GetFloat("MusicVolume");
			Debug.Log($"Setting music volume to: {PlayerPrefs.GetFloat("MusicVolume")} after wait");
        }

		public void UpdateVolume (){
			GetComponent<AudioSource>().volume = PlayerPrefs.GetFloat("MusicVolume");
		}
	}
}