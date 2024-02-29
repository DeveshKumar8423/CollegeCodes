//Stack Operations LinkedList
#include <stdio.h>
#include <stdlib.h>
#define size 5

struct node {
    int data;
    struct node *link;
};

struct node *top = NULL;

void push() {

    struct node *temp = (struct node *)malloc(sizeof(struct node));

    
    if (temp == NULL) {
        printf("Memory allocation failed. Stack is full.\n");
    } else {
        
        printf("Enter data to push: ");
        scanf("%d", &temp->data);

        
        temp->link = top;
        top = temp;
        printf("%d pushed to the stack.\n", temp->data);
    }
}


void pop() {
    if (top == NULL) {
        printf("Stack is empty. Cannot pop.\n");
    } else {
        
        struct node *temp = top;
        top = top->link;

        printf("%d popped from the stack.\n", temp->data);
        free(temp); 
    }
}

int main() {
    
    push();
    push();
    pop();

    return 0;
}
