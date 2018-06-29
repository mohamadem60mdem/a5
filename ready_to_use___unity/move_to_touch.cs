using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class move_to_touch : MonoBehaviour {

    Vector3 from = new Vector3(1f, 2f, 3f);
    Vector3 to = new Vector3(5f, 6f, 7f);

    

    public float speed = 0.01f;
    //public Transform target;


    public GameObject target;


    // Use this for initialization
    void Start () {
      //  s1 = GameObject.Find("s1");
        //target = GameObject.Find(target.name);

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
        {
            // Get movement of the finger since last frame
            Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;


            //***


            from = target.transform.position;
            to = new Vector3(-touchDeltaPosition.x, touchDeltaPosition.y, 0);
            // Vector3 result = Vector3.Lerp(from, to, 0.01f);
            Vector3 result = Vector3.Lerp(from, to, speed);
            target.transform.position = result;
        }
    }
}
