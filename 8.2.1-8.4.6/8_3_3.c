void invertDisplayList(struct Node* tail) {
    struct Node* current = tail;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->prev;
    }
    printf("NULL\n");
}