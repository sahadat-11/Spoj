//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
bitset<N>f;
vector<int> primes;
void sieve() {
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   primes.push_back(2);
   for(int i = 3; i <= N; i += 2) {
      if(!f[i]) primes.push_back(i);
   }
}
int cnt[N];
int precal[N][12];

void solve() {
   int a, b, n; cin >> a >> b >> n;
   int ans = precal[b][n] - precal[a - 1][n];
   if(n == 0 and a == 1) cout << 1 << "\n";
   else cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  for(int i = 2; i < N; i++) {
    if(!f[i]) {
        for(int j = i; j < N; j += i) {
          cnt[j]++;
        }
    }
  }
  for(int i = 2; i < N; i++) {
    int x = cnt[i];
    for(int j = 1; j <= 10; j++) {
      if(x == j) {
        precal[i][j] = precal[i - 1][j] + 1;
      }
      else {
        precal[i][j] = precal[i - 1][j];
      }
    }
  }
//   for(int i = 1; i < 10; i++) {
//     cout << cnt[i] << "\n";
//   }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}