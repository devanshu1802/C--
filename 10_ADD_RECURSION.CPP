#include<iostream>
using namespace std;
int sum(int x){
    if (x==1)
    return 1;
    else
    return x + sum(x-1);
}
int main(){
int n;
cout << "Enter a number :";
cin >> n;
cout << sum(n)<<endl;
return 0;
}