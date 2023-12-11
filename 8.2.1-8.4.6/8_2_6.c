void display(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->element);
        current = current->next;
    }
    printf("NULL\n");
}
