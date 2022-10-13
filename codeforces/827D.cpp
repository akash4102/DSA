#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]%2==1 || arr[j]%2==1 || arr[i]==2 || arr[j]==2){
                    if(__gcd(arr[i],arr[j])==1){
                       ans=max(ans,i+j+2);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}