//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e8 + 5, mod = 1e9 + 7;
bitset<N>f;
vector<int> prime;
void sieve() {
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   prime.push_back(2);
   for(int i = 3; i <= N; i += 2) {
      if(!f[i]) prime.push_back(i);
   }
}

void solve() {
   int n; cin >> n;
   int q = n;
   int sum_of_divisor = 1;
   for(auto p : prime) { 
      if(p * p > n) break;
      int power_of_p = 1;
      while(n % p == 0) {
        n /= p;
        power_of_p *= p;
      }
      if(power_of_p == 1) continue;
      int x = (p * power_of_p - 1) / (p - 1);
      sum_of_divisor *= x;
   }
   if(n > 1) sum_of_divisor *= ( n + 1);
   cout << sum_of_divisor - q << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}