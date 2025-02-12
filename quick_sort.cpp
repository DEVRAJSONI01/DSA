#include<iostream>
#include<vector>
using namespace std;
int partion(vector<int>&arr,int st,int end){
    int i=st-1;
    for(int j=st;j<end;j++){
        if(arr[j]<arr[end]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}

void quicksort(vector<int>&arr,int st,int end){
    if(st<end){
    int pivotidx=partion(arr,st,end);
    quicksort(arr,st,pivotidx-1);
    quicksort(arr,pivotidx+1,end);
    }
}
int main(){
    vector<int>arr={12,32,35,8,32,17};
    int st=0;
    int end=arr.size()-1;
    quicksort(arr,st,end);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}