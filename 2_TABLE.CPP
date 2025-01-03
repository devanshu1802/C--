// TO PRINT THE TABLE OF A GIVEN NUMBER 
#include<iostream>
using namespace std;
int main()
{
int n;
cout << "Enter a Number :";
cin >> n;
for (int i=1; i<=10; i++){
    cout << n << " x " << i << " = " << n*i << endl;
}
return 0;
}


// TO PRINT THE PRODUCT OF THE DIGITS OF A NUMBER
// #include<iostream>
// using namespace std;
// int main()
// {
//  int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int product;
//     while (n!=0){
//         int digit = n%10;
//         n = n/10;
//         product*=digit;
//     }
//     cout << product << endl;
// return 0;
// }
