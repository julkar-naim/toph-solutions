#include <iostream>
using namespace std;

bool check(int n, int pos){
    return (bool)(n & (1<<pos));
}

int howmuch(int n){
   int count = 0;
   for(int i = 0; i < 32; i++){
        if(check(n, i))
            count++;
   }
   return count;

}

int main(){
   int i,a; cin >> a;
   int main = howmuch(a);

   for(i = 1; i < a; i++){
        if(howmuch(i) == main)
            break;
   }
   cout << i << endl;
}
