#include <iostream>
using namespace std ;
int main(){
    int size = 6 , low = 0 , high = size - 1 , mid ,target , index ;
    int flag = 0 ;
    int arr[size] ;
    cout << "Enter the target element:\n";
    cin >> target ;
    for ( int i = 0 ; i < 6 ; i++){
        cout << "Enter an element:\n";
        cin >> arr[i];
    }
    while (low<=high) {
        mid = (low + high) / 2;
        if (target == arr[mid]){
            cout << "element found at "<< mid ;
            flag = 1 ;
            break ;
        }
        else if (target > arr[mid]){
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }
    if (!flag){
        cout << "element not found";
    }

return 0 ;        
}
