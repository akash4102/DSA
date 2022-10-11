#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        char a1=a[a.size()-1];
        char b1=b[b.size()-1];
        if(a1=='S' and b1=='L') cout<<"<"<<endl;
        else if(a1=='L' and b1=='S') cout<<">"<<endl;
        else if(a1=='S' and b1=='M') cout<<"<"<<endl;
        else if(a1=='M' and b1=='S') cout<<">"<<endl;
        else if(a1=='M' and b1=='L') cout<<"<"<<endl;
        else if(a1=='L' and b1=='M') cout<<">"<<endl;
        else if(a1==b1){
            int x1=a.size()-1;
            int x2=b.size()-1;
            if(a1=='S'){
                if(x1>x2){
                    cout<<"<"<<endl;
                }
                else if(x1<x2){
                    cout<<">"<<endl;
                }
                else cout<<"="<<endl;
            }
            else if(a1=='L'){
                if(x1>x2){
                    cout<<">"<<endl;
                }
                else if(x1<x2){
                    cout<<"<"<<endl;
                }
                else cout<<"="<<endl; 
            }
            else{
                cout<<"="<<endl;
            }
        }
    }
    return 0;
}