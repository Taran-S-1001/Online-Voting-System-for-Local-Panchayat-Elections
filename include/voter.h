#ifndef VOTER_H
#define VOTER_H
typedef struct Queue Queue;

typedef struct Voter {
    int voterID;
    char *name;
    char *gender;
    int age;
    int hasVoted;
    int votedCandidate;
} Voter;

Voter* createVoter(int id,const char *name,const char *gender,int age);
void registerVoter(int id,const char* name,const char* gender,int age,Queue *voterQueue);
void displayVoters(Queue *voterQueue);

#endif