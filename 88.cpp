#include<iostream>
#include<vector>
using namespace std;
//void merge(vector<int>&arr1,int m,vector<int>&arr2,int n){
// int i=m-1,j=n-1,idx=arr1.size()-1;
// while(i>=0&&j>=0){
//     if(arr1[i]>arr2[j]){
//         arr1[idx]=arr1[i];
//         i--;
//         idx--;
//     }
//     else{
//         arr1[idx]=arr2[j];
//         j--;
//         idx--;
//     }
// }
// }
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx=m+n-1,i=m-1,j=n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>nums2[j]){
                nums1[idx]=nums1[i];
                idx--;
                i--;
            }
            else{
                nums1[idx]=nums2[j];
                idx--;
                j--;
            }
        }
        while(j>=0){
            nums1[idx]=nums2[j];
            idx--;
            j--;
        }
}
int main(){
vector<int>arr1={0};
int m=0;
vector<int>arr2={1};
int n=1 ;
merge(arr1,m,arr2,n);
for(int i:arr1){
    cout<<i;
}
    return 0;
}