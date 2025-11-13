#include "../include/candidate.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

Candidate* createCandidate(int id, const char* name, const char* party) {
    Candidate* newCandidate = (Candidate*)malloc(sizeof(Candidate));
    newCandidate->candidateID = id;
    strncpy(newCandidate->name, name, sizeof(newCandidate->name) - 1);
    newCandidate->name[sizeof(newCandidate->name) - 1] = '\0';
    strncpy(newCandidate->party, party, sizeof(newCandidate->party) - 1);
    newCandidate->party[sizeof(newCandidate->party) - 1] = '\0';
    newCandidate->voteCount = 0;
    return newCandidate;
}

void registerCandidate(int id, const char* name, const char* party, TreeNode* candidateTree) {
    Candidate* newCandidate = createCandidate(id, name, party);
    insert(candidateTree, newCandidate);
}

void displayCandidates(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    displayCandidates(root->left);
    printf("Candidate ID: %d, Name: %s, Party: %s, Votes: %d\n",
           root->data->candidateID,
           root->data->name,
           root->data->party,
           root->data->voteCount);
    displayCandidates(root->right);
}