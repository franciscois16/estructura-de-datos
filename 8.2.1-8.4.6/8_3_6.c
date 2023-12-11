struct Set {
    struct Node* head;
    struct Node* tail;
};

struct Set* createSet() {
    struct Set* newSet = (struct Set*)malloc(sizeof(struct Set));
    newSet->head = NULL;
    newSet->tail = NULL;
    return newSet;
}

void addToSet(struct Set* set, int value) {

    struct Node* current = set->head;
    while (current != NULL) {
        if (current->data == value) {
            return; 
        }
        current = current->next;
    }

    
    insertLast(&(set->head), &(set->tail), value);
}
