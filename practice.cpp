#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"Enter the number of rows and coloumns:";
cin >> n;
  for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
return 0;
}

