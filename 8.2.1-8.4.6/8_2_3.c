struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    struct Node* current = list1;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = list2;
    return list1;
}