#include<iostream>
using namespace std;
int rD(vector<int>&nums){
    int n=nums.size();
    int slow=0;
    for(int fast=1;fast<n;fast++){
        if(nums[fast]!=nums[slow]){
            slow++;
            nums[slow]=nums[fast];
        }
    }
    return slow+1;
}
int main(){
    vector<int>nums={0,0,1,1,1,2,2,3};
    int ans=rD(nums);
    cout<<ans;
    return 0;
}