#include "queue.h"
#include "voter.h"
#include <stdio.h>
#include <stdlib.h>

Queue* createQueue()
{
    Queue* q=malloc(sizeof(Queue));
    q->front=NULL;
    q->rear=NULL;
    return q;
}

Node* createQueueNode(Voter* val)
{
    Node* n=malloc(sizeof(Node));
    n->data=val;
    n->next=NULL;
    return n;
}

void enqueue(Queue* q,Voter* val)
{
    if(q==NULL)return;
    if(q->front==NULL)
    {
        q->front=createQueueNode(val);
        q->rear=q->front;
    }
    else
    {
        Node* temp=createQueueNode(val);
        q->rear->next=temp;
        q->rear=temp;
    }
}

Node* dequeue(Queue* q)
{
    if(q==NULL||q->front==NULL)return NULL;
    Node* temp=q->front;
    q->front=temp->next;
    if(q->front==NULL)q->rear=NULL;
    temp->next=NULL;
    return temp;
}

bool isEmpty(Queue* q)
{
    return(q==NULL||q->front==NULL);
}

void freeQueue(Queue* q)
{
    if(q==NULL)return;
    Node* n;
    while((n=dequeue(q))!=NULL)
    {
        if(n->data){
            free(n->data->name);
            free(n->data->gender);
            free(n->data);
        }
        free(n);
    }
    free(q);
}
