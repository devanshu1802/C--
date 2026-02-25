#include<iostream>
using namespace std;
// Question - Book allocation problem.    
// N - No. of books,   M - No. of students
bool isValid(vector<int> &arr, int n, int m,int maxAllowedPages){
    int students =1 , pages =0;

        for(int i=0; i<n; i++){
            if(arr[i] > maxAllowedPages){
                return false;
            }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }
        else{
            students++;
            pages = arr[i];
        }
        }
        return students > m ? false : true;

 }
int allocateBooks(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int ans = -1;
    int st=0 , end = sum;    // Range of possible Answers
    while(st <= end){
        int mid = st + (end-st)/2;

        if(isValid(arr,n,m,mid)){   // Left
            ans = mid;
            end = mid -1;
        }
        else{                       // Right 
            st = mid +1;
        }
    }
    return ans;

}
int main(){
    vector<int> vec = {2,1,3,4};
    int n =4, m=2;

    cout<< allocateBooks(vec,n,m) << endl;

return 0;
}