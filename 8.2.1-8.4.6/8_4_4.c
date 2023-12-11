void RotateLeft(struct Node **head) {
  // Si la lista está vacía, no hay nada que rotar
  if (*head == NULL) {
    return;
  }
  struct Node *current = *head;
  struct Node *prev = current->prev;
  *head = prev;
  prev->next = current;
  current->prev = prev;
  current->next = NULL;
}