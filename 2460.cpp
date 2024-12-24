#include<iostream>
#include<vector>
using namespace std;
    vector<int>aO(vector<int>&nums){
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int count=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                 k++;
                count++;
            }
        }
        for(int i=count;i<n;i++){
            nums[i]=0;
        }
        return nums;
    }
int main(){
    vector<int>nums={1,2,2,1,1,0};   
    vector<int>result=aO(nums);
    for(int x:result){
        cout<<x<<" ";
    }
    return 0;
}