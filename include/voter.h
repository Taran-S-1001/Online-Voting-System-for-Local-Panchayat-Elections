#ifndef VOTER_H
#define VOTER_H

typedef struct {
    int voterID;
    char name[50];
    char gender[10];
    int age;
    int hasVoted;
} Voter;
void registerVoter();
void displayVoters();

#endif