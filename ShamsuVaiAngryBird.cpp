#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,d;
    cin >> n >> q >> d;
    int a[n],b[n],query,lit[n];
    bool check[n];
    
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];


    for(int i = 0; i < n; i++){
        if(a[i] - b[i] < 0){
            check[i] = false;
            lit[i] = a[i];
        }
        else
        {
            check[i] = true;
            a[i+1] += a[i] - b[i];
            if(a[i+1] > d) 
                a[i+1] = d;
            lit[i] = a[i];
        }
    }

    for(int i = 0; i < q; i++){
        cin >> query;
        if(check[query-1])
            cout << lit[query-1]<< " SHAMSU VAI Zindabad" << endl;
        else
            cout << lit[query-1]<< " SHAMSU VAI Angrybird" << endl;
    }

}
