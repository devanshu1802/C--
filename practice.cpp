#include<iostream>
using namespace std;
int main(){
    int a;
    int  discount=1;
    cout << ("Enter the value of your bill\n");
    cin >> a;

    if(a<=500)
     cout << "No discout is available for you";

    else if (a>500)
    cout << "The discout will be of 5%";
    discount = a * 0.05;
    cout << "The discount is "<< discount <<endl;

}