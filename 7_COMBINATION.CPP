// THIS CODE IS BASED ON THE CONCEPT OF COMBINATION FROM CLASS 11TH MATHS (nCr)
#include<iostream>
using namespace std;
int cmb(int x){
    int fact=1;
    for (int i=1; i<=x ; i++){
    fact *=i;}
    return fact;
}
int main(){
    int n,r;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter r:";
    cin >> r;
    
    int a= cmb(n);
    int b= cmb(r);
    int c= cmb (n-r);
     
    cout << a/(b*c) <<endl; 
}