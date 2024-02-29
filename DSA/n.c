//Queue operation through linked list
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* f = NULL;
struct node* r = NULL;

void EnQueue() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (f == NULL && r == NULL) {
        f = temp;
        r = temp;
    } else {
        r->link = temp;
        r = temp;
    }
}

int DeQueue() {
    int dequeuedData = -1; // Default value if the queue is empty

    if (f == NULL && r == NULL) {
        printf("Queue is underflow, no element can be deleted\n");
    } else {
        struct node* temp = f;
        f = f->link;
        
        if (f == NULL) {
            r = NULL; // If the queue becomes empty after dequeue
        }

        dequeuedData = temp->data;
        free(temp);
    }

    return dequeuedData;
}

void Display() {
    struct node* current = f;
    if (current == NULL) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
    printf("\n");
}

int main() {
    EnQueue();
    EnQueue();
    EnQueue();
    EnQueue();

    Display();

    int dequeued = DeQueue();
    if (dequeued != -1) {
        printf("Dequeued element: %d\n", dequeued);
    }

    Display();

    return 0;
}
