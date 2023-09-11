//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll a, b; cin >> a >> b;
      bool flag = false;
      for(ll i = a; i <= b; i++) {
         flag = false;
         for(ll j = 2; j * j <= i; j++) {
            if(i % j == 0) {
               flag = true;
               break;
            }
         }
         if(!flag and i != 1) cout << i << "\n";
      }
      cout << "\n";
   }
   return 0;
}