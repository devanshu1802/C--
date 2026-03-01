#include<iostream>
using namespace std;
// Bubble Sort
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

// Selection Sort 
void selectSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallestIndex = i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
}

// Insertion Sort 
void insertSort(int arr[], int n ){
    for(int i=1;i<n-1;i++){
        int curr = i, prev = i-1;
        while(prev >=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[]= {4,1,5,2,3};
    int n = 5;
    bubbleSort(arr,n);
    printArr(arr, n);

    selectSort(arr,n);
    printArr(arr,n);

    insertSort(arr,n);
    printArr(arr,n);

return 0;
}