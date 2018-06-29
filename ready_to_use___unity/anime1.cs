//address:: https://unity3d.com/learn/tutorials/topics/animation/animator-scripting
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class anime1 : MonoBehaviour {
    Animator anim;

 
 int state__ = Animator.StringToHash("Base Layer.State3");
    void Start () {
        anim = GetComponent<Animator>();
        
    }

    void Update()
    {
        
        
        if (Input.GetKeyDown(KeyCode.Space) )
        {
            anim.Play(state__);
        }

        
    }
}
