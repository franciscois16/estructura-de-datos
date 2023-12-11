void deleteLast(struct Node** head) {
    if (*head == NULL) return;

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        struct Node* current = *head;
        struct Node* prev = NULL;

        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }

        free(current);
        prev->next = NULL;
    }
}