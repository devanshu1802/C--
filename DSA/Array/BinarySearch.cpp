#include<iostream>
using namespace std;

int binarySearch(vector<int>vec , int tar){
    int st=0 , end = vec.size()-1;

    while(st <=end){
        int mid = (st + (end-st))/2;

        if(tar >vec[mid]){
            st = mid+1;
        }
        else if(tar < vec[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> vec = {1,2,3,4,5,7,9};
    int target = 7;
    int result = binarySearch(vec, target);
    
    cout << result << endl;

return 0;
}