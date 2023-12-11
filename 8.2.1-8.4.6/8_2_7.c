struct Set {
    struct Node* head;
};

struct Set* createSet() {
    struct Set* newSet = (struct Set*)malloc(sizeof(struct Set));
    newSet->head = NULL;
    return newSet;
}

void addToSet(struct Set* set, int value) {
    // Add the value to the set only if it's not already present
    struct Node* current = set->head;
    while (current != NULL) {
        if (current->data == value) {
            return; // Value already in the set
        }
        current = current->next;
    }