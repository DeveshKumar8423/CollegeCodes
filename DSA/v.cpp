
#include<bits/stdc++.h>
using namespace std;

bool subarray(int arr[] , vector<int> &sub_arr , int n){
    
    for(int i=0 ; i<10 ; i++){
        int j;
        for(j=0 ; j<n ; j++){
            if(arr[i+j] != sub_arr[j]) //subarray element is not present in main array
                break;
        }
        if(j==n) // loop checks that all elements are in the array
            return true;
    }
    return false;
}

int main(){
    
    int arr[100] = {1,2,3,4,5,6,7,8,9,0};
    int n;
    cout<<"Enter number of elements in subarray: ";
    cin>>n;

    vector<int> sub_arr(n); 

    cout<<"Enter the elements of the subarray: ";
    for (int i = 0; i < n; i++) {
        cin >> sub_arr[i]; 
    }

    if(subarray(arr, sub_arr , n)){
        cout << "Subarray found in the main array" << endl;
    } else {
        cout << "Subarray not found in the main array" << endl;
    }

    return 0;
}
