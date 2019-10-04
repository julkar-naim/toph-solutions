#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n; cin >> m >> n;
    vector < int > seta(m);
    vector < int > setb(n);

    for(int i = 0; i < m; i++)
        cin >> seta[i];
    
    for(int i = 0; i < n; i++)
        cin >> setb[i];
    if(m <= n){
        for(int i = 0; i < m; i++){
            int flag = 0;
            for(int j = 0; j < n; j++){
                if(seta[i] == setb[j])
                    flag++;
            }
            if(flag == 0)
                setb.push_back(seta[i]);
        }
        sort(setb.begin(), setb.end());
        cout << setb[0] ;
        for(int i = 1; i < setb.size(); i++)
            cout << " " << setb[i];
    }else
    {
        for(int i = 0; i < n; i++){
            int flag = 0;
            for(int j = 0; j < m; j++){
                if(setb[i] == seta[j])
                    flag++;
            }
            if(flag == 0)
                seta.push_back(setb[i]);
        }
        sort(seta.begin(), seta.end());
        cout << seta[0];
        for(int i = 1; i < seta.size(); i++)
            cout << " " << seta[i];
    }


}
