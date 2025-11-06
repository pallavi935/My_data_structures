#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insertBegin(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void deleteBegin() {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    printf("Deleted node with value: %d\n", temp->data);
    free(temp);
}
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertBegin(10);
    insertBegin(20);
    insertBegin(30);
    insertBegin(40);
    printf("Initial Linked List:\n");
    display();
    printf("\nDeleting first node...\n");
    deleteBegin();
    display();
    printf("\nDeleting first node again...\n");
    deleteBegin();
    display();
    return 0;
}
