//Brute force method
#include<iostream>
#include<vector>
using namespace std;
int brute(vector<int>&height){
    int n=height.size();
    int max_water=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int w=j-i;
            int h=min(height[i],height[j]);
            int area=w*h;
            max_water=max(area,max_water);
        }
    }
    return max_water;
}
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<brute(height);
    return 0;
}

//optimaised way
#include<iostream>
#include<vector>
using namespace std;
int optim(vector<int>&height){
    int n=height.size();
    int lp=0;
    int rp=n-1;
    int max_water=0;
    while(lp<rp){
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        int area=w*h;
        max_water=max(area,max_water);
        height[lp]<height[rp]?lp++:rp--;
    }
    return max_water;
}
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<optim(height);
    return 0;
}