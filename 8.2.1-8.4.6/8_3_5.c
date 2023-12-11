void deleteLast(struct Node** head, struct Node** tail) {
    if (*tail == NULL) return;

    if ((*tail)->prev == NULL) {
        free(*tail);
        *head = *tail = NULL;
    } else {
        struct Node* current = *tail;
        *tail = (*tail)->prev;
        (*tail)->next = NULL;
        free(current);
    }
}