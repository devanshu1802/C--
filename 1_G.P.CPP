// TO PRINT A G.P OF NUMBER WHICH IS INCREASING BY DIGIT 4
#include<iostream>
using namespace std;
int main(){
    int n,i ;
    cout << "Enter the number you want to print of the G.P :";
    cin >> n;
    int number =3;
    for ( i=1; i<=n; i++){
        cout << number << endl;
        number = number*4;
    }
    return 0;
}
