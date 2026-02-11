#include <iostream>
using namespace std;

int main(){
    int n=3118, rev=0;
    
    while(n !=0){
        rev = (rev*10)+ n%10;
        n /=10;
    }
    cout<<"The reverse of the number "<<rev <<endl;
    return 0;
}