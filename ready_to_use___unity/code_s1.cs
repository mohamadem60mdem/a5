// lerp to Touch and android Touch
using UnityEngine;
using System.Collections;
using UnityEngine.UI;   //Allows us to use UI.

//Player inherits from MovingObject, our base class for objects that can move, Enemy also inherits from this.
public class code_s1 : MonoBehaviour
{
    float secondX = 1;
    float secondy = 1;
    float secondz = 1;
    public float speed = 0.01f;
    public Transform target;

    Vector3 from = new Vector3(1f, 2f, 3f);
    Vector3 to = new Vector3(5f, 6f, 7f);
    private GameObject s1;
    void Start()
    {
        s1 = GameObject.Find("s1");
    }
    // public float speed;
    void Update()
    {
       
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
        {
            // Get movement of the finger since last frame
            Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;

            // Move object across XY plane
          //  transform.Translate(-touchDeltaPosition.x * speed, -touchDeltaPosition.y * speed, 0);

            //***


            from = s1.transform.position;
            to = new Vector3(touchDeltaPosition.x, touchDeltaPosition.y, 0);
            // Vector3 result = Vector3.Lerp(from, to, 0.01f);
            Vector3 result = Vector3.Lerp(from , to , 0.01f);
            transform.position = result;
           

        }
       
        

        /*
        from = s1.transform.position;
        Vector3 result = Vector3.Lerp(from, to, 0.01f);
        transform.position = result;
        Vector3 from2 = s1.transform.position;
        */
       

    }





}
