#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    long long int ans1=(n*(n+1))/2;
    long long int ans2=0;
    for(int i=0;i<n-1;i++){
        ans2+=arr[i];
    }
  long long int f=ans1-ans2;
    cout<<f;

}