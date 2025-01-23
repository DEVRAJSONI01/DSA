#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>arr;
        int i=0,j=0;
        while(j<nums.size()){
            int m=nums[i];
            if(j-i+1<k){
                j++;
                m=max(m,nums[j]);
                arr.push_back(m);
            }
            else if(j-i+1==k){
                j++;
                i++;
            }
        }
       
        return arr;
    }


int maxsum(vector<int>&nums,int k){
int n=nums.size();
    int sum=0;   
    int maxs=0; 
    int i=0,j=0;
    while(j<n){
        sum=sum+nums[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            maxs=max(sum,maxs);
            sum=sum-nums[i];
            i++;
            j++;
        }
    }
    return maxs;
}

vector<int>&first_negative(vector<int>&nums,int k){
int i=0,j=0;
vector<int>arr;
while(j<nums.size()){
if(j-i+1<k){
    if(nums[j]<0){
        arr.push_back(nums[j]);
        i++;
        j=i;
    }
    else{
        j++;
    }
}
else if(j-i+1==k){
    i++;
}
}
return arr;
}


int main(){
vector<int>nums={1,3,-1,-3,5,3,6,7};
vector<int>arr;
int k=3;
//cout<<maxsum(nums,k)<<endl;
//arr=maxSlidingWindow(nums,k);
arr=first_negative(nums,k);
for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";
}
    return 0;
}

