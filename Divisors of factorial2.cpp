//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e8 + 7;
bitset<N>f;
vector<ll> primes;
void sieve() {
   f[0] = f[1] = true;
   for(ll i = 4; i < N; i += 2) f[i] = true;
   for(ll i = 3; i * i < N; i += 2) {
      if(!f[i]) {
         for(ll j = i * i; j < N; j += 2 * i) f[j] = true;
      }
   }
   for(ll i = 2; i < N; i++) {
      if(!f[i]) primes.push_back(i);
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   ll t; cin >> t;
   while(t--) {
      ll n, m; cin >> n >> m;
      ll number_of_divisor = 1;
      for(auto p : primes) {
         if(p > n) break;
         ll power_of_p = 0;
         for(ll i = p; i <= n; i += p) {
            ll x = i;
            while(x % p == 0) {
               x /= p;
               power_of_p++;
            }
         }
         number_of_divisor = 1ll * number_of_divisor * (power_of_p + 1) % m;
      }
      cout << number_of_divisor << "\n";
   }
   
    return 0;
}