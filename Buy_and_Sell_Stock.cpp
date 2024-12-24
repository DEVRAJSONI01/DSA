#include<iostream>
#include<vector>
using namespace std;
int max_profit(vector<int>&prices){
    int n=prices.size();
    int mp=0;
    int bb=prices[0];
    for(int i=0;i<n;i++){
        if(prices[i]>bb){
            mp=max(mp,prices[i]-bb);
        }
        bb=min(bb,prices[i]);
    }
    return mp;
}
int main(){
vector<int>prices={7,1,5,3,9,4};
cout<<max_profit(prices);
    return 0;
}
