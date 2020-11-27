#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../models/models.h"

Node *createNode(Patient P) {

    Node *temp = (Node*)malloc(sizeof(Node));
    temp->P.patients = P.patients;
    temp->P.cures = P.cures;
    strcpy(temp->P.dmy , P.dmy);
    strcpy(temp->P.name , P.name);
    temp->next = temp->prev = NULL;
    return temp;
}

void push(int patients) {
    Node *temp = createNode(patients);

    if(!head) {
        head = tail = temp;
    }
    else if(patients < head->patients) {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    else if(patients > head->patients) {
        temp->prev = tail;
        head->next = temp;
        tail = temp;
    }
    else {
        Node *curr->head;

        while(curr && curr->next->patients < temp->patients) {
            curr=curr->next;
        }
        curr->next->prev = temp;
        temp->next = curr->next;
        curr->next = temp;
        temp->prev = curr;
    }
}


