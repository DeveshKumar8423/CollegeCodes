#include<stdio.h>

void subarray(int arr[], int start, int end){
    int sum = 0;
    for(int i = start; i < end; i++){
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("\nSum of subarray is %d\n", sum);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    subarray(arr, 1, 9);

    return 0;
}