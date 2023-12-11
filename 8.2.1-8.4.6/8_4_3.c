struct Node* find(struct Node* head, int value) {
    if (head == NULL) return NULL;

    struct Node* current = head;

    do {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    } while (current != head);

    return NULL;
}