#include<iostream>
using namespace std;
// Question - Search in Rotated Sorted Array
int rotatedArray(vector<int> nums, int tar){
    int st = 0, end= nums.size()-1;

    while(st <= end){
        int mid = st + (end-st)/2;
        if(nums[mid] == tar){
            return mid;
        }

        if(nums[st] <= nums[mid]){
            if(nums[st] <= tar && tar <= nums[mid]){
                end = mid -1;
            }
            else{
                st = mid + 1;
            }
        }

        else{
            if(nums[mid] <= tar && tar <= nums[end]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> vec = {6,7,8,2,3,4,5};
    int target = 7;
    cout << rotatedArray(vec, target) << endl;

return 0;
}