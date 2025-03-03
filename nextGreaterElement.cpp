#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
vector<int>arr={3,6,5,4,2};
int n=arr.size();
stack<int>temp;
vector<int>ans(n,-1);
for(int i=2*n-1;i>=0;i--){
    while(!temp.empty() && arr[temp.top()]<=arr[i%n]){
        temp.pop();
    }
    ans[i%n]= temp.empty()?-1:arr[temp.top()];
    temp.push(i%n);
}
for(int i: ans){
    cout<<i<<" ";
}
}