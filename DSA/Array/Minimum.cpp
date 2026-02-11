#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int arr[]={2,8,-1,-5,3};
    int smallest = INT_MAX;
    int index = -1;

    for(int i=0;i<size; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            index = i;
        }
    }
    cout << "Smallest value is " << smallest <<endl;
    cout << "The index of the value is "<< index << endl;

}