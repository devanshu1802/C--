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
            if(arr[j]>arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap()
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

return 0;
}