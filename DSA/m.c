#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *f;
struct node *r;

f=NULL;
r=NULL;
void EnQueue()
{
    //Create a node
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    scanf("%d" , &temp->data);
    temp->link = NULL;

    if(f==NULL && r==NULL)
    {
        printf("Queue is empty");
        f=temp;
        r=temp;
    }
    else{
        r->link = temp;
        r=temp;
    }
}

void DeQueue()
{
    if(f==NULL && r==NULL)
    {
        printf("Queue is underflow , no element can be deleted");
    }
    else if(f==r)
    {
        struct node *temp;
        temp = f; //We can write r also (f or r)
        f=NULL;
        r=NULL;
        free(temp);
    }
    else
    {
        struct node *temp;
        temp=f;
        f=f->link;
        temp->link=NULL;
        free(temp);
    }
    
}

int main()
{
    EnQueue();
    EnQueue();
    EnQueue();
    EnQueue();

    DeQueue();
}