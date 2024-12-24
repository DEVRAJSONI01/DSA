#include<iostream>
#include<vector>
using namespace std;
int pima(vector<int>&arr){
int n=arr.size();
int st=0;//st=1
int end=n-1;//end=n-2
while(st<=end){
int mid=st+(end-st)/2;
if(arr[mid]>=arr[mid-1]&&arr[mid]>=arr[mid+1]){
    return mid;
}
else if(arr[mid]>=arr[mid-1]&&arr[mid]<=arr[mid+1]){
    st=mid+1;
}
else{
    end=mid-1;
}
}
return -1;
}
int main(){
vector<int>arr={0,2,3,0};
int ans=pima(arr);
cout<<ans;
    return 0;
}