#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;

    long fibo,x,y,z;
    x = 1, y = 0; 

    for(int i = 0; i < n; i++){
        z = x + y;
        fibo = z;
        x = y; y = z;
    }
    
    cout << fibo << endl;
}
