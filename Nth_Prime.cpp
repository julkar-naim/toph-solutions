#include <bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n;
    long long MAX = 8000000;
    vector < bool > prime(MAX, true);

    for(int i = 2; i <= sqrt(MAX); i++){
        if(prime[i])
            for(int j = i*i; j < MAX; j += i)
                    prime[j] = false;
    }
    int count = 0;
    for(int i = 2; i < MAX; i++){
        if(prime[i]) count++;
        if(count == n){
            cout << i << endl;
            break;
        }
    }
    return 0;


}
