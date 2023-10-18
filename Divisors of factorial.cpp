//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
const int mod = 1e9 + 7;
bitset<N>f;
vector<int> primes;
void sieve() {
   f[0] = f[1] = true;
   for(int i = 4; i < N; i += 2) f[i] = true;
   for(int i = 3; i * i < N; i += 2) {
      if(!f[i]) {
         for(int j = i * i; j < N; j += 2 * i) f[j] = true;
      }
   }
   for(int i = 2; i < N; i++) {
      if(!f[i]) primes.push_back(i);
   }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      int number_of_divisor = 1;
      for(auto p : primes) {
         if(p > n) break;
         int power_of_p = 0;
         for(int i = p; i <= n; i += p) {
            int x = i;
            while(x % p == 0) {
               x /= p;
               power_of_p++;
            }
         }
         number_of_divisor = 1ll * number_of_divisor * (power_of_p + 1) % mod;
      }
      cout << number_of_divisor << "\n";
   }
   
    return 0;
}