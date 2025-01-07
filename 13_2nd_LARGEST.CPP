// TO FIND THE SECOND LARGEST NUMBER FROM THE ARRAY 
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,123,232,322,444,5};
    int n= sizeof(arr)/4;
    int highest= INT_MIN;
    for (int i=0;i<n;i++){
        highest= max(highest,arr[i]);
    }
    int highest_2 = INT_MIN;
    for (int i=0;i<n;i++){
        if(highest != arr[i])
        highest_2 = max(highest_2 ,arr[i]);
    }
    cout << highest_2  << endl;
return 0;
}