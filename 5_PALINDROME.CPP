// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string palindrome;
//     cout << "Enter a number or string: " << endl;
//     cin >> palindrome;
//     for (int i=palindrome.length()-1; i>=0; i--){
//         cout << palindrome[i];
//     }
//     return 0;
// }

// BY USING INTEGER 
#include<iostream>
using namespace std;
int main(){
int n,num,b,a;
int rev = 0;

cout <<"Enter the number :";
cin >> num;
n=num;
while(n !=0){
    b = n%10;
    rev = rev* 10 +b;
    n = n/10;
}
if(num== rev){
    cout << "The number is a palindrome. "<< endl;
}
else 
    cout << "The number is not a palindrome";
return 0;
}