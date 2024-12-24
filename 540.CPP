#include<iostream>
#include<vector>
using namespace std;
int snd(vector<int>&nums){
    int n=nums.size();
int st=0;
int end=n-1;
while(st<=end){
    int mid=st+(end-st)/2;
    if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
        return mid;
    }
    if(nums[mid]==nums[mid-1]){
    if((st+mid-1)%2==0){
        st=mid+1;
    }
    else if((st+mid-1)%2!=0){
        end=mid-1;
    }
    }
    else if(nums[mid]==nums[mid+1]){
        if((st+mid-1)%2==0){
            end=mid-1;
        }
        else if((st+mid-1)%2!=0){
            st=mid+1;
        }
    }
}
return -1;
}
int main(){
vector<int>nums={1,1,2,3,3,4,4,8,8};
int ans=snd(nums);
cout<<ans;
    return 0;
}