#include<iostream>
using namespace std;
// Question - Find the missing number in the array
int missing(vector<int> &arr){
    int n = arr.size();
    int expectedSum = n* (n+1)/2;
    int actualSum = 0;

    for( int val: arr){
        actualSum += val;
    }
    return expectedSum-actualSum;
    }
int main(){
    vector<int> vec = {0,1,2,3};

    cout << missing(vec) << endl;

return 0;
}