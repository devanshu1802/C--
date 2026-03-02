#include<iostream>
using namespace std;
// Dutch National Flag Algorithm
void Dnf(vector<int> &arr){
    int n = arr.size();
    int low=0, mid=0, high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    vector<int> vec = {0,2,2,1};
    Dnf(vec);
    for (int val: vec){
        cout << val << " ";
    }
    cout << endl;

return 0;
}