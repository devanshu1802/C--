// TO PRINT THE COPY OF AN ARRAY INTO ANOTHER ARRAY BUT IN REVERSE
#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8};
int arr2[8];
int n= sizeof(arr)/4;
for (int i=0;i<n;i++){
    int j= n-1-i;
    arr2[j]=arr[i];
}
for (int i=0;i<n;i++){
    cout << arr2[i] << endl;
}
return 0;
}