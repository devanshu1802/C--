#include<iostream>
using namespace std;
bool isPossible(vector<int> &arr, int n,int m, int minAllowedDis){
    int cows =1, lastStallPos = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] - lastStallPos >= minAllowedDis){
            cows++;
            lastStallPos = arr[i];
        }
        if(cows == m){
            return true;
        }
    }
    return false;
}
int maxDistance(vector<int> &arr, int m){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int st=1, end = arr[n-1]- arr[0], ans =-1;

    while(st<= end){
        int mid =  st + (end-st)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;

}
int main(){
    vector<int> vec = {1,2,4,8,9};
    int cows = 3;

    cout<< maxDistance(vec,cows) << endl;

return 0;
}