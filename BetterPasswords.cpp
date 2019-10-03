#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    printf("%c", str[0] - 32);
    for(int i = 1; i < str.size(); i++){
        if(str[i] == '\n') break;
        if(str[i] == 's')
            cout << '$';
        else if(str[i] == 'i' )
            cout << '!';
        else if(str[i] == 'o')
            cout << "()" ;
        else
            cout << str[i];
    }
    cout << '.' << endl;
}
