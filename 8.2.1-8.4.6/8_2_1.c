void modifyNode(struct Node* head, int targetValue, int newValue) {
    struct Node* current = head;
    while (current != NULL && current->data != targetValue) {
        current = current->next;
    }
    if (current != NULL) {
        current->data = newValue;
    }
}
    