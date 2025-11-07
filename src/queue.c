#include "../include/queue.h"
#include <stdio.h>
#include <stdlib.h>

Queue* createQueue()
{
    Queue* q=(Queue*)malloc(sizeof(Queue));
    q->front=NULL;
    q->rear=NULL;
    return q;
}

Node* createNode(Voter* val)
{
    Node* n=(Node*)malloc(sizeof(Node));
    n->data=val;
    n->next=NULL;
}
