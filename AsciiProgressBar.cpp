#include <bits/stdc++.h>
using namespace std;

int main(){
    double n; cin >> n;
    int cast = (int)n;
    int ct = cast/10;

    cout << "[";
    for(int i = 0; i < ct; i++)
        cout << "+";
    for(int j = 0; j < (10-ct); j++)
        cout << ".";
    cout << "] " << cast << "%" << endl;;
    
}
