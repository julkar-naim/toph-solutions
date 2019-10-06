#include <bits/stdc++.h>
using namespace std;

int main(){
    string pi = "141592653589";
    int t; cin >> t;
    while(t--){
        int pos; cin >> pos;
        cout << pi[pos-1] << endl;
    }
    return 0;
}
