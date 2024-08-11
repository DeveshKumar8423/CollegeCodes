#include<bits/stdc++.h>
using namespace std;

int main(){

    int even = 0;
    int odd = 0;
    int arr[20] = {1,2,3,4,5,6,7,8,9,0};

    for(int i=0 ; i<10 ; i++){
        if(i%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even elements : "<< even <<endl;
    cout<<"Odd elements : "<< odd <<endl;
}