//Matrix is sparse or not
#include<stdio.h>

int main()
{
    int count_zero = 0 , count_nonzero = 0 , i , j;
    
    printf("Enter rows : ");
    scanf("%d" , &i);
    printf("Enter columns : ");
    scanf("%d" , &j);

    int arr[i][j];

    for(int a = 0 ; a <i ; a++)
    {
        for(int b = 0 ; b <j ; b++)
        {
            printf("Enter elements : ");
            scanf("%d" , &arr[a][b]);
        }
    }

for(int a = 0 ; a <i ; a++)
    {
        for(int b = 0 ; b <j ; b++)
        {
            if (arr[a][b] == 0) {
                count_zero++;
            }
            else{
                count_nonzero++;
            }
        }  
    }

    if (count_zero > count_nonzero){
        printf("It is a sparse matrix");
    }
    else{
        printf("It is not a sparse matrix");
    }

    return 0;
}