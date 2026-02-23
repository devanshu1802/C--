
#include<iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << strs[j];
            
        }
        cout << endl;
    }

    return "";
}

int main(){
    vector<string> vec = {"flower","flow","flight"};

    longestCommonPrefix(vec);
return 0;
}
