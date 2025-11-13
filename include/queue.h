#ifndef QUEUE_H
#define QUEUE_H
typedef struct Voter Voter;
#include <stdbool.h>

typedef struct Node {
    Voter* data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue();
Node* createQueueNode(Voter* value);
void enqueue(Queue* q, Voter* value);
Node* dequeue(Queue* q);
bool isEmpty(Queue* q);
void freeQueue(Queue* q);

#endif