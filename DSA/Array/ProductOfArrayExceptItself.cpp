#include<iostream>
using namespace std;
// Question - Product of Array Except Itself

vector<int> productExceptItself(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n,1);

    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    
    int suffix = 1;
    for(int i = n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
}
int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int> result = productExceptItself(vec);
    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << result[3] << endl;
    cout << result[4] << endl;

return 0;
}