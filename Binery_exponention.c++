#include<iostream>
using namespace std;
double cal(double x,long p){
    double ans=1;
    if(p<0){
        x=1/x;
        p=-p;
    }
    while(p!=0){
        if(p%2==1){
            ans*=x;
        }
        x*=x;
        p/=2;
        
    }
    return ans;
}
int main(){
    double x=2;
    long p=-2;
printf("%lf",cal(x,p));
    return 0;
}