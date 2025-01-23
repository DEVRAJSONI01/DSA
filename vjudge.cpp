#include<iostream>
using namespace std;
int val(int x,int y){
    if(y==0){
        return 1;
    }
    else if(y%2==0){
        return pow(pow(x,y/2),2);
    }
    else if(y%2!=0){
        return pow(pow(x,(y-1)/2),2)*x;
    }
}
int main(){
int n;
cin>>n;
while(n>0){
    long long int x,y;
    cin>>x;
    cin>>y;
    cout<<val(x,y)<<endl;
    n--;
}
    return 0;
}

