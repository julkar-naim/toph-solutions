#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[9] = {0};
    string num;
    cin >> num;

    for(int i = 0; i < num.size(); i++)
    {
        if(num[i] == '0') arr[0]++;
        else if(num[i] =='1')arr[1]++;
        else if(num[i] =='2')arr[2]++;
        else if(num[i] =='3')arr[3]++;
        else if(num[i] =='4')arr[4]++;
        else if(num[i] =='5')arr[5]++;
        else if(num[i] =='6')arr[6]++;
        else if(num[i] =='7')arr[7]++;
        else if(num[i] =='8')arr[8]++;
        else arr[9]++;
    }

    int max = 0;

    for(int j = 0; j < 9; j++){
        if(max <  arr[j])
            max = arr[j];
    }

    for(int i = 0; i < 9; i++)
        if(max == arr[i]){
            cout << i << endl;
            break;
        }


}
