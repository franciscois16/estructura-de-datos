void RotateRight(struct Node **head) {
  // Si la lista está vacía, no hay nada que rotar
  if (*head == NULL) {
    return;
  }
  struct Node *current = *head;
  struct Node *last = current->prev;
  *head = last;
  last->next = current;
  current->prev = last;
  current->next = NULL;
}