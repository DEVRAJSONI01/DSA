#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int>&arr){
int n=arr.size();
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j+1],arr[j]);
        }
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}

void section(vector<int>&arr){
int n=arr.size();
for(int i=0;i<n;i++){
    int si=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[si]){
            si=j;
        }
    }
    swap(arr[i],arr[si]);
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}

void inserction(vector<int>&arr){
int n=arr.size();
for(int i=1;i<n;i++){
    int pre=i-1;
    int curr=arr[i];
    while(pre>=0&&arr[pre]>curr){
        arr[pre+1]=arr[pre];
        pre--;
    }
    arr[pre+1]=curr;
}

for(int i=0;i<n;i++){
    cout<<arr[i];
}
}

void countsort(vector<int>&arr){
    int n=arr.size();
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(arr[i],k);
    }
    vector<int> count(k+1, 0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<k+1;i++){
        count[i]+=count[i-1];
    }
    vector<int>output(n);
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>arr={0,1,0,2,1,6,7,2,4,3,7,2};
    countsort(arr);
    return 0;
}