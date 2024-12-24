#include<iostream>
using namespace std;
int main(){
    int matrix[3][3]={0,1,1,0,1,0,1,1,0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if((matrix[i][j]==1&&matrix[j][k]==1)&&matrix[i][k]!=1){
                    cout<<"not transistive"<<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}