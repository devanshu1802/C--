// TO PRINT THE PATTERN OF INTEGERS 
// #include<iostream>
// using namespace std;
// int main()
// {
// int n ;
// cout <<"Enter the number of rows and columns:";
// cin >> n;
// for(int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//         cout<< j;
//     }
// cout << endl;
// } 
// return 0;
// }


// To print a triangle with continuos integers 
// #include<iostream>
// using namespace std;
// int main()
// {
// int n,num=1;
// cout << "Enter the number of rows to print integers :";
// cin >> n;
// for(int i=1;i<=n;i++){
//     for (int j=1; j<=i; j++){
//         cout <<  num << " ";
//         num++;
//     }
// cout << endl;
// }
// return 0;
// }


// TO PRINT THE PATTERN OF ALPHABETS WITH THE HELP OF ABOVE METHOD
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout << "Enter the number of characters you want to display:";
// cin >> n;
// for(int i=1;i<=n;i++){
//     for (int j=1; j<=n; j++){
//         cout << char(j+64)<< " ";
//     }
// cout << endl;
// }
// return 0;
// }


// TO PRINT THE RIGHT TRIANGLE 
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout << "Enter the number of rows ";
// cin >> n;
// for(int i=1;i<=n;i++){
//     for (int j=1; j<=i; j++){
//         cout << " *";
//     }
// cout << endl;
// }
// return 0;
// }


// TO PRINT THE FLIP OF THE RIGHT TRIANGLE
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout << "Enter the number of characters you want to display:";
// cin >> n;
// for(int i=n;i>=0;i--){                                                 (int i=1;i<=n;i++)
//     for (int j=1; j<=i; j++){                                          (int j=1; j<=n-i+1; j++)
//         cout << " *";
//     }
// cout << endl;
// }
// return 0;
// }


//TO PRINT THE 0 AND 1 TRIANGLE
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout <<"Enter the number of rows and coloumns:";
// cin >> n;
// for (int i=1; i<=n; i++){
//     for (int j=1; j<=i; j++){
//         if((i+j)%2==0)
//         cout << "1 ";
//         else
//         cout << "0 ";

//     }
// cout << endl;    
// }
// return 0;
// }


// TO PRINT PLUS OF STAR
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout <<"Enter the number of rows and coloumns:";
// cin >> n;
// int middle = n/2 +1;
// for (int i=1; i<=n; i++){
//     for (int j=1; j<=n; j++){
//         if(i==middle || j==middle)
//         cout << " *";
//         else
//         cout << "  ";
//     }
// cout << endl;    
// }
// return 0;
// }


// TO PRINT THE HOLLOW SQUARE
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout <<"Enter the number of rows and coloumns:";
// cin >> n;
// for (int i=1; i<=n; i++){
//     for (int j=1; j<=n; j++){
//         if(i==1 || i==n || j==1 || j==n)
//         cout << " *";
//         else
//         cout << "  ";
//     }
// cout << endl;    
// }
// return 0;
// }


// TO PRINT THE STAR PATTERN VERTICALLY FLIPPED
// #include<iostream>
// using namespace std;
// int main()
// {
// int n,m;
// cout <<"Enter the number of rows:";
// cin >> n;
// for (int i=1; i<=n; i++){
//     for (int j=1; j<=n-i;j++){
//         cout << "  ";
//     }
//     for (int j=1; j<=i; j++){
//         cout << "* ";
//     }
// cout << endl;    
// }
// return 0;
// }


// TO PRINT CROSS 
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout <<"Enter the number of rows and coloumns:";
// cin >> n;
// for (int i=0; i<n; i++){
//     for (int j=0; j<n; j++){
//         if(i==j || i+j == n-1)
//         cout << " *";
//         else
//         cout << "  ";
//     }
// cout << endl;    
// }
// return 0;
// }


// TO PRINT A RHOMBUS
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout <<"Enter the number of rows and coloumns:";
// cin >> n;
// for (int i=0; i<n; i++){
//     for (int j=0; j<n-i-1; j++)
//         cout << "  ";
//     for (int j=0; j<n; j++)
//         cout << " *";
    
// cout << endl;    
// }
// return 0;
// }


// TO PRINT A DIAMOND
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of rows for the diamond pattern: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << " *";
//         }
//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = n; j > i; j--) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << " *";
//         }
//         cout << endl;
//     }
//     return 0;
// }