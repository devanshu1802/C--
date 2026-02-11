#include<iostream>
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