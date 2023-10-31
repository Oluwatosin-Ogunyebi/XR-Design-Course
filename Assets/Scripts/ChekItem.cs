using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChekItem : MonoBehaviour
{
    public string tagName;
    public Transform newPosition;
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(tagName))
        {
            other.gameObject.SetActive(false);
            other.gameObject.transform.position = newPosition.position;
            other.gameObject.SetActive(true);
        }
    }
}
