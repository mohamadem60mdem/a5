using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof (LineRenderer))]
public class laser2 : MonoBehaviour {

    private LineRenderer lr;
    public GameObject prefab;



    // Use this for initialization
    void Start () {
        lr = GetComponent<LineRenderer>();	
	}

    // Update is called once per frame
    void FixedUpdate()
    {
        RaycastHit hit;

        if(Physics.Raycast(transform.position,transform.forward,out hit))
        {
            if (hit.collider)
            {
                lr.SetPosition(1 , new Vector3(0, 0, hit.distance));
                //  Instantiate(prefab, new Vector3(0, 0, hit.distance) );Mathf.Max(1.2f, 2.4f) Mathf.Max(hit.distance)
                //Mathf.Max(transform.position.z +hit.distance)
              prefab.transform.position = new Vector3(hit.transform.position.x, hit.transform.position.y+5, hit.transform.position.z);
                //rint(hit.distance);
                print(hit.transform);
            }

        }
            else
            {
                lr.SetPosition(1, new Vector3(0, 0, 5000));
            prefab.transform.position = new Vector3(0,0, 0);
        }


       



    }
}
