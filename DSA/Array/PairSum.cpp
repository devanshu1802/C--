#include<iostream>
#include<vector>
using namespace std;

// Question - Return the two index which sums up the target (Applicable only if the array is sorted)

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i=0, j=n-1;

    while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum > target){
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    int target = 11;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << ", " << ans[1] << endl;

return 0;
}