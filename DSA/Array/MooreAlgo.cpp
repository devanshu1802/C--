#include<iostream>
using namespace std;

// Question - Majority Element (Return the most occuring element in the array )
int majority(vector<int> nums){
    int freq=0, ans=0;
    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }

    }
    return ans;
}
int main(){
    vector<int> vec = {1,4,2,3,4,4,5,7};

    cout << majority(vec) << endl;


return 0;
}