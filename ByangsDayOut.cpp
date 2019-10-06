#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int arr[3];

    for(int i = 0; i < t; i++){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+sizeof(arr)/sizeof(arr[0]));

        if(arr[2] <= arr[0] + arr[1])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;

}
