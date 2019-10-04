#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    string str[t];
    
    for(int i = 0; i < t; i++)
        cin >> str[i];

    for(int i = 0; i < t; i++){
        if(str[i] == "ba")
            str[i] += 'a';
        else if(str[i].size()%2 == 0)
            str[i].erase(str[i].begin()+1);
    }
    int max = str[0].size();

    for(int i = 1; i < t; i++){
        if(max <= str[i].size())
            max = str[i].size();
    }
    for(int i = 0; i < t; i++){
        for(int j = 0; j < (max - str[i].size())/2; j++)
            cout << " ";
        cout << str[i];
        cout << endl;
    }
    return 0;
}
