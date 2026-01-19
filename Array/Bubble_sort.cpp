#include <iostream>
using namespace std ;
int main(){
    int size = 6 ;
    int arr[size] ;
    for ( int i = 0 ; i < 6 ; i++){
        cout << "Enter an element:\n";
        cin >> arr[i];
    }
    // printing array before sorting
    cout << "Array before sorting\n";
    for ( int i = 0 ; i < 6 ; i++){
        cout << arr[i] << " " ;
    }
    //sorting 
    for ( int i = 0 ; i < 6-1 ; i++){
        for (int j = 0 ; j < 6 - 1 - i ; j++){
            if ( arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
    // printing array after sorting
    cout << "\nArray after sorting\n";
    for ( int i = 0 ; i < 6 ; i++){
        cout << arr[i] << " " ;
    }
return 0 ;        
}