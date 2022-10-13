#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        vector<vector<char>>vec(8,vector<char>(8));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>vec[i][j];
            }
        }
        char ans;
        for(int i=0;i<8;i++){
            int red1=0,blue1=0,red2=0,blue2=0;
            for(int j=0;j<8;j++){
                if(vec[i][j]=='R')red1++;
                if(vec[i][j]=='B')blue1++;
                if(vec[j][i]=='R')red2++;
                if(vec[j][i]=='B')blue2++;
            }
            if(red1==8 || red2==8){
                ans ='R';
                break;
            } 
            if(blue1==8 || blue2==8){
                ans='B';
                break;
            } 

        }
        cout<<ans<<endl;
    }
    return 0;
}