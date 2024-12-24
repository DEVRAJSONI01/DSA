//BRUTE FORCE APPROCH
#include<iostream>
#include<vector>
using namespace std;
vector<int>name(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i]*=nums[j];
            }
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4};
    int n=nums.size();
vector<int>ans=name(nums);
for(int i=0;i<n;i++){
    cout<<ans[i];
}
    return 0;
}

//optimized way
#include<iostream>
#include<vector>
using namespace std;
vector<int>name(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4};
    vector<int>ans=name(nums);
    int n=nums.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<"\t";
    }
    return 0;
}