#include<iostream>
using namespace std;

void rev(int arr[],int size){
    int smallest = INT_MAX;
    int biggest = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest = i;
        }
        if(arr[i]>biggest){
            biggest = i;
        }
    }
    swap(arr[smallest],arr[biggest]);
}
int main(){
    int size = 5;
    int arr[]={1,2,3,4,5};

    rev(arr,size);
    for(int i=0; i<size; i++){
       cout << arr[i] <<" ";
    }
    
return 0;
}