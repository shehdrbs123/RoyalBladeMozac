using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField] private float spawnTime;
    [SerializeField] private float spawnCount;
    [SerializeField] private float spawnSpeed;
    [SerializeField] private float startTime;

    [SerializeField] private GameObject spawnPrefab;
    [SerializeField] private float objSpeed;

    private WaitForSeconds spawnSpeedSeconds;
    private WaitUntil spawnOk;
    Queue<GameObject> beanObjects = new Queue<GameObject>();

    private void Start()
    {
        spawnSpeedSeconds = new WaitForSeconds(spawnSpeed);
        spawnOk = new WaitUntil(isSpawnOk);
        Invoke("Spawn", startTime);
    }

    public void Spawn()
    {
        StartCoroutine(SpawnCoroutine());    
    }

    public IEnumerator SpawnCoroutine()
    {
        while (true)
        {
            for (int i = 0; i < spawnCount; i++)
            {
                GameObject obj;
                if (!beanObjects.TryDequeue(out obj))
                {
                    obj = Instantiate(spawnPrefab,transform);
                }
                obj.SetActive(true);

                
                Collider objCols = obj.GetComponent<Collider>();
                Vector3 gap = Vector3.up * objCols.bounds.extents.y * 2 * i;
                Vector3 spawnPos = transform.position + gap;
                obj.transform.position = spawnPos;

                Rigidbody objRigs = obj.GetComponent<Rigidbody>();
                objRigs.AddForce(Vector3.down * objSpeed,ForceMode.VelocityChange);
                
            }

            yield return spawnOk;
            yield return spawnSpeedSeconds;
        }
    }

    private bool isSpawnOk()
    {
        if (spawnCount == beanObjects.Count)
            return true;
        return false;
    }

    public void CallDie(GameObject a)
    {
        beanObjects.Enqueue(a);
//#if UNITY_EDITOR
//        Debug.Log(string.Format("Enter count : {0} , {1}", beanObjects.Count, spawnCount));
//#endif
    }
}
