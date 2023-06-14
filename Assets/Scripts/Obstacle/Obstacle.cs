using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collision),typeof(Rigidbody),typeof(StatusComponent))]
public class Obstacle : MonoBehaviour
{
    private ObjectSpawner spawner;
    private Collider cols;
    private Rigidbody rigs;
    
    [SerializeField] private float limitYSpeed;
    [SerializeField] private LayerMask mask;

    ObstcleData obstcleData;
    private Collider ignored;
    private void Awake()
    {
        cols = GetComponent<Collider>();
        rigs = GetComponent<Rigidbody>();
        spawner = transform.parent.GetComponent<ObjectSpawner>();
        obstcleData = GetComponent<StatusComponent>().BaseStatus as ObstcleData;
        transform.SetParent(null);
    }
    private void FixedUpdate()
    {
        rigs.velocity = Vector3.ClampMagnitude(rigs.velocity, limitYSpeed);
    }

    private void OnDisable()
    {
        rigs.velocity = Vector3.zero;
        if(ignored)
            Physics.IgnoreCollision(ignored, cols, false);
        spawner.CallDie(gameObject);
    }
    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.CompareTag("Player"))
        {
            float userYSize = collision.collider.bounds.extents.y * 2;
            Vector3 rayStart = transform.position + Vector3.down * cols.bounds.extents.y;
            if(Physics.Raycast(rayStart,Vector3.down,userYSize+0.5f, mask))
            {
                StatusComponent player = collision.gameObject.GetComponent<StatusComponent>();
                player.ApplyDamage(obstcleData.Status.damagePoint,Color.yellow);
                ignored = collision.collider;
                Physics.IgnoreCollision(ignored, cols, true);
            }
        }
    }
   

#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        Collider colss = GetComponent<Collider>();
        Vector3 rayStart = transform.position + Vector3.down * colss.bounds.extents.y;
        Debug.DrawLine(rayStart, rayStart + Vector3.down * 2,Color.red);
    }
#endif

    public void Die()
    {
        GameProfile.Instance.score += obstcleData.ScorePoint;
        gameObject.SetActive(false);
    }
}
