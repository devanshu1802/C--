#include<iostream>
using namespace std;

void unique(int arr[],int size){
    for(int i=0; i<size; i++){
        int count =0;

        for(int j=0;j < size; j++){
            if(arr[i]== arr[j]){
                count++;
            }
        }
        if(count==1){
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int arr[] = {1,3,2,2,3,4,4,5};
    int size =8;

    unique(arr,size);
return 0;
}