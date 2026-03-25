#include<iostream>
using namespace std;
int diagonalSum(int mat[][4],int n){
    int sum =0;

    // Primary Diagonal = j = i
    // Secondary Diagonal = j-i-1

    for(int i=0; i<n; i++){
        sum += mat[i][i];

        if(i != n-i-1){
            sum += mat[i][i];
        }
    }
    return sum;
}

int main(){
    int matrix[4] [4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int x = 4;

    cout << diagonalSum(matrix, x) << endl;
return 0;
}