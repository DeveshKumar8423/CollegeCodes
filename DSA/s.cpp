#include<iostream>
using namespace std;

int main(){

    int arr[100] = {1,2,3,4,5,6,7,8,9,0};
    
    for(int i=1 ; i<=10 ; i++){
        for(int i=i+1 ; i<=10 ; i++){
            cout<<arr[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}