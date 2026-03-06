#include<iostream>
using namespace std;
// Question - Two Sum II-find two numbers such that they add up to a specific target number.
    vector<int> twoSum(vector<int> &arr, int target){
        int n = arr.size();
        vector<int> ans={-1,-1};
        int st=0, end=n-1;

        while (st<end){
            int sum = arr[st]+arr[end];

            if(sum > target){
                end--;
            }
            else if(sum < target){
                st++;
            }
            else{
                return {st,end};
            }
        }
        return ans;
    }
int main(){
    vector<int> vec = {2,4,5,6,7,8};
    int target = 16;
    vector<int> result = twoSum(vec, target);

    for(int val: result){
        cout << val << " ";
    }


return 0;
}
