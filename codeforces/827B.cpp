#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }
        bool flag=true;
        for(auto x:mp){
            if(x.second>1){
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}