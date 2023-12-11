void insertLast(struct Node** head, struct Node** tail, int value) {
    struct Node* newNode = createNode(value);

    if (*head == NULL) {
        *head = *tail = newNode;
    } else {
        newNode->prev = *tail;
        (*tail)->next = newNode;
        *tail = newNode;
    }
}