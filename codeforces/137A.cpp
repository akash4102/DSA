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
        int k=10-arr.size();
        int ans=0;
        for(int i=k;i>0;i--){
            ans+=((i-1)*6);
        }
//         cout<<ans<<endl;
    }
    return 0;
}
