#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector <char> &s){
    int st=0, end = s.size()-1;

    while(st < end){
        swap(s[st++],s[end--]);
    }
}
int main(){
    vector<char> s = {'a','n','o','s'};
    reverseString(s);

    for(char val: s){
        cout << val << " ";
    }
    cout << endl;

return 0;
}