struct Patient {
    int patients;
    int cures;
    char dmy[25];
    char name[25];
};

struct Node {
    Patient P;
    Node *next,*prev,*head,*tail;
}; *temp
