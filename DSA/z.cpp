#include<iostream>
using namespace std;

int main(){
    
    int arr[10] = {9,5,4,2,1};

    for(int i=0 ; i<4 ; i++){
        cout<<arr[i] - arr[i+1];
        cout<<" ";
        
    }
    return 0;
}