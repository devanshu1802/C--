// To print a triangle with continuos integers 
#include<iostream>
using namespace std;
int main()
{
int n,num=1;
cout << "Enter the number of rows to print integers :";
cin >> n;
for(int i=1;i<=n;i++){
    for (int j=1; j<=i; j++){
        cout <<  num << " ";
        num++;
    }
cout << endl;
}
return 0;
}