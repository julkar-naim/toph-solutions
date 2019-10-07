#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    int c = a+b;

    int count;

    for(int i = 1;i < c; i++){
        if(a+i > b && b+i > a){
            count = c - i;
            break;
        }
    }
    cout << count << endl;
}

