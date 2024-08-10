#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int n = 10; 
    
    for (int start = 0; start < n; start++){
    
        for (int end = start + 1; end <= n; end++){
        
            cout << "Subarray: ";
            for (int i = start; i < end; i++){
                cout << arr[i] << " ";
            }
            cout << endl; 
        }
    }
    return 0;
}