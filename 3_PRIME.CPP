// TO FIND WHETHER THE NUMBER GIVEN IS PRIME OR NOT 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter A Number: ";
    cin >> n;
    
    if(n==1) cout << "The number is neither Prime nor Composite \n";
    else{
    bool a = true;
    for (int i=2; i<=n/2 ; i++){
        if (n%i==0)
        a = false;
        break;
    }
    if(a==true) cout << "Prime \n";
    else cout <<"Composite \n";
    }
    return 0;
}

