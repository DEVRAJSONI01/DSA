//brute force
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort(vector<int>&arr){
// int n=arr.size();
// for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//     }}
// }
// }
// int main(){
// vector<int>arr={2,0,2,1,1,0};
// sort(arr);
// for(int k:arr){
//     cout<<k;
// }
//     return 0;
// }

//optimised (count 0s,1s,2s and use loops to rewrite them)
//more optimised(Dutch national flag algorithem)
#include<iostream>
#include<vector>
using namespace std;
void sort_colour(vector<int>&arr){
int n=arr.size();
int mid=0,high=n-1,low=0;
while(mid<=high){
    if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        mid++;
        low++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else if(arr[mid]==2){
        swap(arr[mid],arr[high]);
        high--;
    }
}
}
int main(){
vector<int>arr={2,0,2,1,1,0};
sort_colour(arr);
for(int i:arr){
    cout<<i;
}
    return 0;
}