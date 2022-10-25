#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=1;i<n;i++){
            if(s[i]=='1'){
                if(s[i-1]=='1'){
                    int j=i;
                    while(j>=0 and s[j]=='1'){
                        j--;
                    }
                    if(arr[j]>arr[i]){
                        s[j]='1';
                        s[i]='0';
                    }
                }
                else{
                    if(arr[i-1]>arr[i]){
                        s[i-1]='1';
                        s[i]='0';
                    }
                } 
            }
        }
//         for(int i=0;i<n;i++){
//             if(s[i]=='1')ans+=arr[i];
//         }
//         cout<<ans<<endl;
    }
    return 0;
}
