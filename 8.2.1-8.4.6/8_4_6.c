struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Función para crear un nuevo nodo
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}