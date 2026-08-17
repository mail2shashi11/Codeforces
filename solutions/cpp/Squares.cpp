#include <bits/stdc++.h>
using namespace std;

int main() {
   int t; cin>>t;
    while(t--){
        bool flag = false;
        int a,b,c,d; cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d){
            flag = true;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}