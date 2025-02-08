//privious smaller element
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>q={3,1,0,8,6};
    stack<int>st;
    vector<int>ans(q.size(),0);
    for(int i=0;i<q.size();i++){
        while(st.size()>0 && st.top()>=q[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(q[i]);
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}
