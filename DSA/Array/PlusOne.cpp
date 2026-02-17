#include<iostream>
#include<vector>
using namespace std;

// Question - Plus One 
vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;

};

int main(){
    vector<int> vec = {1,2,3};
    vector<int> result = plusOne(vec);

    for(int val:result){
        cout << val << endl;
    }
    return 0;
}