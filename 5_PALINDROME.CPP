#include <iostream>
#include <string>
using namespace std;
int main(){
    string palindrome;
    cout << "Enter a number or string: " << endl;
    cin >> palindrome;
    for (int i=palindrome.length()-1; i>=0; i--){
        cout << palindrome[i];
    }
    return 0;
}