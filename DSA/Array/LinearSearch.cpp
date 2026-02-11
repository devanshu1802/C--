#include<iostream>
#include <vector>
using namespace std;


int linearSearch(int arr[],int size,int tar){
    for (int i=0; i<size; i++){
        if(arr[i]== tar){
            return i ;
        }
    }
    return -1;
}
int main(){
    int arr[] = {3,4,9,29,84,3};
    int size = 6;
    int target = 32;

    cout << linearSearch(arr,size,target) << endl;


return 0;
}

// Using vectors 
// int linear(vector<int>& vec,int target){
//     int index = 0;
//     for(int val: vec){
//         if(val == target){
//             return index;
//         }
//     index++;
//     }
//     return -1;
// }

// int main(){
//     vector<int>vec ={3,4,5,6,7,8,9};
//     int target = 7;

//     cout<< linear(vec,target)<< endl;
// }