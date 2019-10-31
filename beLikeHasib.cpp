#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;

int main(){
    llu high,low,count,Search,mid;
    cin >> high >> Search;

    low = 1; count = 0;

    while(low < high){
        mid = (low+high)/2;
        count++;
        if(Search > mid)
            low = mid + 1;
        else
            high = mid ;
    }

    cout << count << endl;

    return 0;


}
