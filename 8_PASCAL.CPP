#include<iostream>
using namespace std;
int fact(int x){
    int r=1;
    for(int a=1; a<=x; a++)
    r *=a;
    return r;
}

int main(){
int n,i,j,result;
cout << "Enter the number of Pascal's Triangle you want to print:";
cin >> n;
for (i=0; i<=n; i++){                               //For Pascal's Triangle the loop is initialized by 0
    for (j=0; j<=i; j++){
       result= fact(i)/(fact(j)*fact(i-j));
       cout << result << " ";
    }
    cout <<endl;
}
return 0;
}