void deleteNode(struct Node** head, int value) {
    if (*head == NULL) return;

    struct Node* current = *head;
    struct Node* prev = NULL;

    do {
        if (current->data == value) {
            if (prev == NULL) {
                // Deleting the head node
                if (current->next == *head) {
                    // The list has only one node
                    free(current);
                    *head = NULL;
                    return;
                } else {
                    *head = current->next;
                    (*head)->prev = current->prev;
                }
            } else {
                prev->next = current->next;
                current->next->prev = prev;
            }

            free(current);
            return;
        }

        prev = current;
        current = current->next;
    } while (current != *head);
}
