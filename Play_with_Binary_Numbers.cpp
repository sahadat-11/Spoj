//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   ll n, m, k; cin >> n >> m >> k;
   ll cnt = 0;
   for(ll i = n; i <= m; i++) {
      ll x = i;
      int even = 0, odd = 0;
      for(int bit = 0; bit < 64; bit++) {
         if(x & (1LL << bit)) {
            if(bit % 2) even++;
            else odd++;
         }
      }
      if(abs(even - odd) == k) cnt++;
   }
   cout << cnt << "\n";
   }
   return 0;
}
//O(n);