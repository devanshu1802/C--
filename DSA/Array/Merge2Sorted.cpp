#include<iostream>
using namespace std;
// Question - Merge 2 Sorted Arrays
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m+n-1, i= m-1, j = n-1;

        while(i >=0 && j >=0){
            if(nums1[i] >= nums2[j]){
                nums1[idx--] = nums1[i--];
            }
            else{
                nums1[idx--] = nums2[j--];
            }
        }
        while(j >= 0){
            nums1[idx--]=nums2[j--];
        }
    }
int main(){
    vector<int> vec1 = {1,2,3,9,0,0,0,0};
    vector<int> vec2 = {5,8,9,11};

    int m=4 , n = vec2.size();
    merge(vec1,m,vec2,n);

    for(int val: vec1){
        cout << val << " ";
    }
return 0;
}