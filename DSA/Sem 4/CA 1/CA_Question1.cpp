#include<iostream>
using namespace std;
// Part 1;
int main(){
    int arr1[]= {2,3,5,6,8,9,1};
    int n = 7;
    int elem, pos;

    cout << "Enter the element you want to insert: " << endl;
    cin >> elem;
    cout << "Enter the position at which you want to insert: " << endl;
    cin >> pos;

    for(int i=n; i> pos; i--){
        arr1[i] = arr1[i-1];
    }
    arr1[pos] = elem;
    n++;

    cout << "After inserting the element the updated is array is like: " << endl;
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

// Part 2
    int arr2 [3][3];

    cout << "Enter the values for 2D array: "<< endl;

    for(int i=0; i<3;i++){
        for(int j =0; j<3; j++){
            cin >> arr2[i] [j];
        }
    }

    cout << "The 2D array is like: " << endl;
    for(int i=0; i<3;i++){
        for(int j =0; j<3; j++){
            cout << arr2[i] [j] << " ";
        }
        cout << endl;
    }

return 0;
}