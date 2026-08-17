#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int countBlocks(const string& s){
    if (s.empty()) return 0;
    int b = 1;
    for (int i = 1; i < s.length(); i++){
        if (s[i] != s[i - 1]) {
            b++;
        }
    }
    return b;
}
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ms= 0;
    for(int i = 0; i < n; i++){
        string rot = s.substr(i) + s.substr(0, i);
        ms = max(ms, countBlocks(rot));
    }
    cout <<ms<< endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}