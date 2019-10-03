#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int l1,l2;
    l1 = log10(a) + 1;
    l2 = log10(b) + 1;
    int first[l1], second[l2]; 

    for(int i = 0; i < l1; i++){
        first[i] = a%10;
        a /= 10;
    }
     for(int i = 0; i < l2; i++){
        second[i] = b%10;
        b /= 10;
    }
    int flag = 0, l = l1 >= l2 ? l2 : l1;
    for(int i = 0; i < l; i++){
        if(first[i] + second[i] >= 10){
            flag = 1;
            break;
        }

    }

    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
}
