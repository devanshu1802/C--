#include<iostream>
#include<vector>
using namespace std;

// Question - Max Subarray Sum

int subArray(vector <int> &vec){
    int currSum = 0, maxSum = INT_MIN;
    for(int val: vec){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    return maxSum;

}
int main(){
    vector <int> vec = {1,2,-4,1,5,};

    int result = subArray(vec);
    cout << result << endl;

return 0;
}