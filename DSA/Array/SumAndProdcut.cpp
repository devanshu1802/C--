#include<iostream>
using namespace std;

int Sum(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum= sum+ arr[i];
    }
    return sum;
}
int Product(int arr[],int size){
    int product=1;
    for(int i=0; i<size; i++){
        product= product *arr[i];
    }
    return product;
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    cout << "Sum of the Array " << Sum(arr,size) << endl;
    cout << "Product of the Array " << Product(arr,size) << endl;

return 0;
}