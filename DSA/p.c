//Binary Search Tree Insertion 

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void Insert(int d)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->left = NULL;
    temp->right = NULL;

    if(root==NULL){
        root==temp;
    }
    else{
        struct node *s , *p;
        s=root;

        while(s!=NULL){
            p=s;
            if(temp->data > s->data){
                s = s->right;
            }
            else{
                s = s->left;
            }
        }

        if(temp->data < p->data){
            p->left = temp;
        }
        else{
            p->right = temp;
        }
    }
}

int main(){
    Insert(50);
    Insert(20);
}
