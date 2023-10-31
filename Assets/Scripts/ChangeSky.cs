using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeSky : MonoBehaviour
{
    public Material skyMaterial;
    private Material defaultMaterial;

    // Start is called before the first frame update
    void Start()
    {
        defaultMaterial = RenderSettings.skybox;
    }

    public void ChangeSkyBox() 
    {
        RenderSettings.skybox = skyMaterial;
    }

    public void SetDefaultSkyBox()
    {
        RenderSettings.skybox = defaultMaterial;
    }
}
