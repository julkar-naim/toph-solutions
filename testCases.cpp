#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,cpu, mem;
    cin >> c >> cpu >> mem;
    int ac;

        int d[c], cp[c], m[c];
        for(int i = 0; i < c; i++)
            cin >> d[i] >> cp[i] >> m[i];

    for(ac = 0; ac < c; ac++){

        if(cp[ac] > cpu){
            cout << "CLE" << endl;
            break;
        }
		else if(m[ac] > mem){
            cout << "MLE" << endl;
            break;
        }
		else if(d[ac] > 0){
            cout << "WA" << endl;
            break;
        }


    }
    if(ac == c)
        cout << "AC" << endl;
    return 0;
}
