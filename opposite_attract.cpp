#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int oppositeAttract(vector<int>&arr){
    int n=arr.size();
    int j=0;
    int count=0;
    for(int i=j+1;i<n-1;i++){
        if(arr[j]==-arr[i] && arr[j]!=0){
            count++;
            j++;
        }
        else if(arr[j]==0){
            j++;
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<oppositeAttract(arr);
    return 0;
}