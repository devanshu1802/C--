#include<iostream>
using namespace std;

#define size 6

int main(){

int arr[size] = {1,2,3,4,5};
int n = 5;
int elem, pos;

cout << "Enter element to insert: ";
cin >> elem;

cout << "Enter position: ";
cin >> pos;

if(n == size){
    cout << "Overflow";
}
else{
    for(int i = n; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = elem;
    n++;
    
    cout << "Updated Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

return 0;
}