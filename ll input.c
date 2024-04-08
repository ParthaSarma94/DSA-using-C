#include <stdio.h>
#include <stdlib.h>
// Define a structure for a node
typedef struct Node {
    int data;
    struct Node* next;
}node;
// Function to create a new node
 node *createNode(int data) {
     node* newNode = ( node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the end of the linked list
void insertNode( node** head, int data) {
     node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
     node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the linked list
void displayList( node* head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
}

int main() {
    int n, data;
     node* head = NULL;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the data for each node:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertNode(&head, data);
    }

    displayList(head);

    return 0;
}
