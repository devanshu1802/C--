#include<iostream>
using namespace std;

void swap_value(int x,int y){
    int temp = x;
    x = y;
    y = temp;
}
void swap_reference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
void swap_pointer(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a=5 ,b=10;
    swap_value(a,b);
    cout << "THIS IS CALL BY VALUE" << endl;    
    cout << "The value of a :" << a << endl << "The value of b :"<< b << endl << endl;
    
    swap_reference(a,b);
    cout << "THIS IS CALL BY REFERENCE " << endl;    
    cout << "The value of a :" << a << endl << "The value of b :"<< b << endl << endl;
    
    swap_pointer(&a,&b);
    cout << "THIS IS CALL BY POINTER " << endl;    
    cout << "The value of a :" << a << endl << "The value of b :"<< b << endl;

return 0;
}