//Single Link List Functions
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *root = NULL;

void append() {
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (root == NULL) {
        root = temp;
    } else {
        struct node *p = root;
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = temp;
    }
}

void display() {
    struct node *p = root;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("\n");
}

int length() {
    int c = 0;
    struct node *p = root;
    while (p != NULL) {
        c++;
        p = p->link;
    }
    return c;
}

void add_begin() {
    struct node temp = (struct node)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->link = root;
    root = temp;
}

void add_after() {
    int loc;
    printf("Enter the location after which you want to add: ");
    scanf("%d", &loc);
    if (loc < 1 || loc > length()) {
        printf("Invalid location\n");
        return;
    }
    struct node temp = (struct node)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    struct node *p = root;
    for (int i = 1; i < loc; i++) {
        p = p->link;
    }
    temp->link = p->link;
    p->link = temp;
}

void delete_node() {
    int loc;
    printf("Enter the location to delete: ");
    scanf("%d", &loc);
    if (loc < 1 || loc > length()) {
        printf("Invalid location\n");
        return;
    }
    struct node *temp, *p;
    if (loc == 1) {
        temp = root;
        root = root->link;
        free(temp);
    } else {
        p = root;
        for (int i = 1; i < loc - 1; i++) {
            p = p->link;
        }
        temp = p->link;
        p->link = temp->link;
        free(temp);
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Append\n2. Display\n3. Length\n4. Add element at the beginning\n5. Add element after a location\n6. Delete\n10. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                append();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Length: %d\n", length());
                break;
            case 4:
                add_begin();
                break;
            case 5:
                add_after();
                break;
            case 6:
                delete_node();
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}