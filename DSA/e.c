//Maximum and Minimum of a given array
#include <stdio.h>

int main()
{
    int arr[] = {10, 5, 20, 8, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
        if (arr[i] > max){
            max = arr[i];
        }
    }

    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);

    return 0;
}
