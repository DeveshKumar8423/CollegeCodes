//Doubly Linklist Functions
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;

void append()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    scanf("%d" , &temp->data);
    temp->left = NULL;
    temp->right = NULL;

    if(root==NULL)
        root = temp;
    else
    {
        struct node *p;
        p=root;
        while(p->right!=NULL){
            p = p->right;
        }
        p->right = temp;
        temp->left = p;
    }
}

void display()
{
    struct node *p;
    p=root;
    while(p!=NULL){
        printf("%d->" , p->data);
        p=p->right;
    }
    printf("\n");
}

void length()
{
    struct node *p;
    int count = 0;
    p = root;
    while(p!=NULL){
        p = p->right;
        count+=1;
    }
    printf("%d" , count);
}

int main(){
    int times;
    int choice;

    while(1)
    {
        printf("Enter 1 for display , 2 for length , 3 for append and 4 for exit: ");
        scanf("%d" , &choice);

        if(choice ==1)
            display();
        else if (choice==2)
            length();
        else if(choice==3)
            append();
        else if(choice==4)
        break;

    }

    return 0;
}