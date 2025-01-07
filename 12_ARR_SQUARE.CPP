// TO PRINT THE ARRAY  WITH THE ELEMENTS AS THE SQUARE OF THE NUMBERS STARTING FROM 1 TO N 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    int arr[n];
    for (int i=1;i<=n;i++){
        arr[i]= i*i;
    }
    for (int i=1;i<=n;i++){
        cout <<arr[i]<<endl;
    }
return 0;
}