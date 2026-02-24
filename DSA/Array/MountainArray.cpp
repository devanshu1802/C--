#include<iostream>
using namespace std;
// Question - Peak index in Mountain Array

int mountainArray(vector<int> &vec){
    int st =1, end = vec.size()-2;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(vec[mid-1] < vec[mid] && vec[mid] > vec[mid+1])
            return mid;
        else if( vec[mid-1]< vec[mid])
            st = mid+1;
        else 
            end = mid-1;
    }
    return -1;
}
int main(){
    vector<int> arr = {0,3,8,9,5,2};

    cout << mountainArray(arr) << endl;
return 0;
}