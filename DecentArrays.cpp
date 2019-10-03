#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n], cp[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cp[i] = arr[i];
    }
    sort(arr, arr+sizeof(arr)/sizeof(arr[0]));

    int flag = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != cp[i]){
            flag = 1;
            break;
        }
    }
    
    if(flag)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;


}
