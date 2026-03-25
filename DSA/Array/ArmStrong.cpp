#include<iostream>
using namespace std;
bool isArmStrong(int n ){
    int copyN = n;
    int sumOfCube = 0;

    while(n !=0){
        int dig = n%10 ;

        sumOfCube += (dig * dig * dig);
        n /= 10;
    }
    return sumOfCube == copyN;
}
int main(){
    int x = 153;

    if(isArmStrong(x)){
        cout << "It is a Armstrong Number " << endl;
    }
    else {
        cout << "It is not a Armstrong number ";
    }

return 0;
}