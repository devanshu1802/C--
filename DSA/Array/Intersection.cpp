#include<iostream>
using namespace std;
void intersect(int arr1[], int size, int arr2[], int size2){
    for(int i=0; i<size; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}
int main(){

    int arr1[]= {2,4,6,8,10};
    int size1 = 5;
    int arr2[]= {4,8,12,16};
    int size2 = 4;

    intersect(arr1, size1, arr2, size2);

return 0;
}