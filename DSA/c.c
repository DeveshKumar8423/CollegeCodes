//Doubly linklist Operations

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

// Function to insert a new node at the front of the list
void insert_front(Node** head, int data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    *head = new_node;
}

// Function to insert a new node at the back of the list
void insert_back(Node** head, int data) {
    Node* temp = *head;

    while (temp != NULL && temp->next != NULL) {
        temp = temp->next;
    }

    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->prev = temp;
    new_node->next = NULL;

    if (temp != NULL) {
        temp->next = new_node;
    }
}

// Function to insert a new node at any position in the list
void insert_at_position(Node** head, int position, int data) {
    if (position == 0) {
        insert_front(head, data);
        return;
    }

    Node* temp = *head;
    int index = 0;

    while (temp != NULL && index < position - 1) {
        temp = temp->next;
        index++;
    }

    if (temp == NULL) {
        printf("The given position is out of range.\n");
        return;
    }

    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = data;
    new_node->prev = temp;
    new_node->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = new_node;
    }

    temp->next = new_node;
}

// Function to delete a node from the front of the list
void delete_front(Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;

    if (*head != NULL) {
        (*head)->prev = NULL;
    }

    free(temp);
}

// Function to delete a node from the back of the list
void delete_back(Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    Node* temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    }

    free(temp);
}

// Function to delete a node from any position in the list
void delete_at_position(Node** head, int position) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    Node* temp = *head;
    int index = 0;

    while (temp != NULL && index < position - 1) {
        temp = temp->next;
        index++;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("The given position is out of range.\n");
        return;
    }

    Node* node_to_delete = temp->next;
    temp->next = node_to_delete->next;

    if (node_to_delete->next != NULL) {
        node_to_delete->next->prev = temp;
    }

    free(node_to_delete);
}

// Function to display the doubly linked list
void display(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    insert_front(&head, 3);
    insert_front(&head, 2);
    insert_front(&head, 1);

    display(head);

    insert_back(&head, 4);
    insert_back(&head, 5);

    display(head);

    delete_front(&head);
    delete_back(&head);

    display(head);

    insert_at_position(&head, 1, 10);
    insert_at_position(&head, 2, 20);

    display(head);

    delete_at_position(&head, 2);

    display(head);

    return 0;
}
