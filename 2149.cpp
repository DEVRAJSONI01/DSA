#include<iostream>
#include<vector>
using namespace std;
vector<int>q(vector<int>&arr){
    int n=arr.size();
vector<int>ans(n);
int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ans[j]=arr[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                ans[j]=arr[i];
                j++;
            }
        }
      int k=0;
      for(int i=0;i<n;i++){
        if(ans[i]>0){
            arr[k]=ans[i];
            k=k+2;
        }
      }
      int l=1;
      for(int i=0;i<n;i++){
        if(ans[i]<0){
            arr[l]=ans[i];
            l=l+2;
        }
      }
      return arr;
       }
        
int main(){
vector<int>arr={3,1,-2,-5,2,-4};
vector<int>ans=q(arr);
int n=arr.size();
for(int i=0;i<n;i++){
    cout<<ans[i]<<",";
}
    return 0;
}