#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    while(a <= b){
        sum += arr[a];
        a++;
    }
    cout << sum << endl;
}
