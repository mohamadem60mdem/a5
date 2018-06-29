using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioSource1 : MonoBehaviour {
    AudioSource audioSource;
    // Use this for initialization
    void Start () {
        audioSource = GetComponent<AudioSource>();
    }
	
	// Update is called once per frame
	void Update () {
		
	}

/*
    void OnCollisionEnter(Collision collision)
    {
        foreach (ContactPoint contact in collision.contacts)
        {
            Debug.DrawRay(contact.point, contact.normal, Color.white);
        }
        if (collision.relativeVelocity.magnitude > 2)
            audioSource.Play();
    }
    */
    void OnTriggerEnter(Collider other)
    {
       // Destroy(other.gameObject);
        audioSource.Play();
    }

}
