#include<iostream>
#include<vector>
using namespace std;
int isvalid(vector<int>arr,int n,int m,int mid){
    int pages=0,st=1;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            st++;
            pages=arr[i];
        }
    }
    return st<=m?true:false;
    }
int bap(vector<int>&arr,int n,int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    int st=0,end=sum;
    while(st<=end){
       int mid=st+(end-st)/2;
        if(isvalid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
vector<int>arr={2,1,3,4};
int n=4,m=2;
cout<<bap(arr,n,m);
    return 0;
}