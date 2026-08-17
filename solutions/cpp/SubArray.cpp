#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10,5,2,6};
    int n = arr.size(), ky  = 100;
    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int pd = 1;
            for(int k=i; k<=j; k++) {
               pd *= arr[k];
            }
            if(pd < ky){
             count++;
            }
       }
    }
    cout<<count<<endl;
    return 0;
}