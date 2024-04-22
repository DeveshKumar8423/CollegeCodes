//Stack Operations Array
#include<stdio.h>
#include<stdlib.h> 
#define size 5

int stack[size];
int top=-1;

void push()
{
    int item;
    printf("Enter one element to push: ");
    scanf("%d", &item); 
    if(top==size-1)
    {
        printf("No more elements can be inserted\n");
    }
    else
    {
        top = top+1;
        stack[top] = item;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("No elements since stack is empty\n");
    }
    else
    {
        int item = stack[top];
        top = top-1;
        printf("Deleted item = %d\n", item); 
    }
}
void peek(){
if(top===-1){
printf("stack is empty"):
    }
else{
printf("%d",stack[top]);
}
int main()
{
    int choice; 
    while(1)
    {
        printf("Enter 1 for push\nEnter 2 for pop\nEnter 3 for peek\nenter 4 to exit");
        scanf("%d", &choice); 
        switch(choice)
        {
            case 1:
                push();
                break; 
            
            case 2:
                pop();
                break; 
            case 3:
                peek();
                break;
            
            case 4:
                exit(0); 
            
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
