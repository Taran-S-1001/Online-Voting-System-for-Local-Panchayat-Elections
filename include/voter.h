#ifndef VOTER_H
#define VOTER_H
#include "../include/queue.h"
typedef struct {
    int voterID;
    char *name;
    char *gender;
    int age;
    int hasVoted;
    char *votedCandidate;
} Voter;
Voter* createVoter(int id, const char *name, const char *gender, int age, const char *votedCandidate);
void registerVoter(int id, const char* name, const char* gender, int age, const char *votedCandidate, Queue *voterQueue);
void displayVoters(Queue *voterQueue);

#endif