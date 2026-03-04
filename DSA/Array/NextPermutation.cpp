#include<iostream>
using namespace std;
// Question - Next Permutation
void nextPermutation(vector<int> &arr){
    int pivot = -1, n = arr.size();

    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot ==-1){
        reverse(arr.begin(),arr.end());
        return;
    }
    for(int i=n-1; i>pivot; i--){
        if(arr[i] > arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    int i= pivot+1, j= n-1;
    while(i <=j){
        swap(arr[i++],arr[j--]);
    }
}
int main(){
    vector<int> vec = {1,2,3,9,8,7};
    nextPermutation(vec);

    for(int val: vec){
        cout << val << " ";
    }
    cout << endl;
return 0;
}