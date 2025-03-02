#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int st,int end,int mid){
int i=st;
int j=mid+1;
vector<int>temp;
while(i<=mid && j<=end){
    if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
    }
    else{
        temp.push_back(arr[j]);
        j++;
    }
}
while(i<=mid){
    temp.push_back(arr[i]);
    i++;
}
while(j<=end){
    temp.push_back(arr[j]);
    j++;
}
for(int i=0;i<temp.size();i++){
    arr[st+i]=temp[i];
}
}
void mergesort(vector<int>&arr,int st,int end){
    if(st<end){
    int mid=st+(end-st)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
    merge(arr,st,end,mid);
    }
}
int main(){
    vector<int>arr={12,31,35,8,32,17};
    int st=0;
    int end=arr.size()-1;
    mergesort(arr,st,end);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
}