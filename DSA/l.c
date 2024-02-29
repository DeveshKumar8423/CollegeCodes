//Queue Operation through Array
#include<stdio.h>
#include<stdlib.h>
#define size 10

int Queue[size];
int f=-1;
int r=-1; //initially there is no element in array

void EnQueue()//Insert an element
{
    int ele;
    printf("Enter the element: ");
    scanf("%d" , &ele);

    if(r==size-1)
    {
        printf("Queue is overflow / Queue is full");
    }
    else if(f==-1 && r==-1)
    {
        f=0;
        r=0;
        Queue[r]=ele;
    }
    else
    {
        r = r+1;
        Queue[r] = ele;
    }
}

void DeQueue()
{
    int ele;
    if(f==-1 && r==-1)
    {
        printf("Queue is underflow");
    }
    else if (f==r)//if one element is in queue
    {
        ele = Queue[r];
        printf("Element is deleted : %d", ele);
        f=-1;
        r=-1;
    }
    else
    {
        ele=Queue[f];
        printf("Element is deleted: %d" , ele);
        f=f+1;
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