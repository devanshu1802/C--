#include <iostream>
#include <vector>
using namespace std;

// void reverseArray(int arr[], int size){
//     int start = 0, end = size - 1;

//     while (start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[] = {4, 2, 8, 9, 5, 3, 7};
//     int size = 7;

//     reverseArray(arr, size);
//     for (int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Using vector
void reverse(vector<int> &vec){
    int start=0, end = (vec.size())-1;
    while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> vec ={1,2,3,4,5};
    reverse(vec);
    for(int val: vec){
        cout << val << " ";
    }
    cout << endl;
}