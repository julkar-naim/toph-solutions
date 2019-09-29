#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n; cin >> m >> n;
    char ch[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> ch[i][j];
        }
    }

    int count = 0;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n ; j++){
            if(i == 0 && j == 0){
                if(ch[i][j] == '.' && ch[i][j+1] != '*' && ch[i+1][j] != '*' )
                    count++;
            }
            else if(i == 0 && j == n-1){
                if(ch[i][j] == '.' && ch[i][j-1] != '*' && ch[i+1][j] != '*' )
                    count++;
            }
            else if(i == 0 && j != 0){
                if(ch[i][j] == '.' && ch[i][j-1] != '*' && ch[i][j+1] != '*'&& ch[i+1][j] != '*' )
                    count++;
            }
            else if(j == 0 && i != 0){
                if(ch[i][j] == '.' && ch[i-1][j] != '*' && ch[i+1][j] != '*' && ch[i][j+1] != '*')
                    count++;
            }
            else if(i != 0 && j == n-1){
                if(ch[i][j] == '.' && ch[i-1][j] != '*' && ch[i+1][j] != '*' && ch[i][j-1] != '*')
                    count++;
            }
            else if(i == 0 && j == n-1){
                if(ch[i][j] == '.' && ch[i][j+1] != '*' && ch[i-1][j] != '*' )
                    count++;
            }
            else if(i == m-1 && j == n-1){
                if(ch[i][j] == '.' && ch[i][j-1] != '*' && ch[i-1][j] != '*' )
                    count++;
            }
            else if(i == m-1 && j != n-1){
                if(ch[i][j] == '.' && ch[i][j-1] != '*' && ch[i][j+1] != '*'&& ch[i-1][j] != '*' )
                    count++;
            }
            else if(ch[i][j] == '.' && ch[i][j-1] != '*'&& ch[i][j+1] != '*' && ch[i-1][j] != '*' && ch[i+1][j] != '*' )
                count++;
        }
    }
    cout << count << endl;
}
