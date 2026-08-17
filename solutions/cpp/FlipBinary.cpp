#include <iostream>
#include <vector>
#include <string>
using namespace std;

void sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> o, z;
    for(int i = 0; i < n; ++i){
        if (s[i] == '1') {
            o.push_back(i + 1);
        } else {
            z.push_back(i + 1);
        }
    }
    if(o.size() % 2 == 0){
        cout<<o.size()<< "\n";
        for (int i = 0; i < o.size(); ++i){
            cout<<o[i]<<(i == o.size() - 1 ? "" : " ");
        }
        cout<<endl;
        return;
    }
    if(z.size() % 2 != 0) {
        cout<<z.size()<< "\n";
        for(int i = 0; i < z.size(); ++i) {
            cout<<z[i]<<(i == z.size() - 1 ? "" : " ");
        }
        cout << "\n";
        return;
    }
    cout <<"-1"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(!(cin >> t)) return 0;
    while (t--){
        sol();
    }
    return 0;
}