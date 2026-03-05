#include<iostream>
using namespace std;
// Question - Search in a rotated sorted array 2
bool search(vector<int> &arr, int target){
    int n = arr.size();
    int low =0, high = n-1;

    while(low <=high){
        int mid = (low+high)/2;

        if(arr[mid]== target){
            return true;
        }
        if(arr[mid]== arr[low] && arr[mid]== arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<= target && target <= arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return false;
}
int main(){
    vector<int> vec = {6,7,8,2,3,4,5};
    int target = 6;
    bool result = search(vec, target);
    cout << result << endl;
return 0;
}