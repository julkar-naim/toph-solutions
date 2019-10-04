#include <bits/stdc++.h>
using namespace std;

int main(){
     
    string str;
    cin >> str;

    if(str.size() & 1)
        cout << "No" << endl;
    else
    {
        for(int i = 0; i < str.size(); i++){
            if(str[i] == ')'){
                for(int j = i; j >= 0; j--){
                    if(str[j] == '('){
                        str[i] = '0';
                        str[j] = '0';
                        break;
                    }
                }
            }
        }
        bool flag = false;
        for(int i = 0; i < str.size(); i++){
            if(str[i] != '0'){
                flag = true;
                break;
            }
        }

        if(flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}
