//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e8 + 7, mod = 1e9 + 7;
#define int long long
bitset<N>f;
vector<pair<int, int>> p(N);

void sieve() {
  f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
        for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     }
   }
}

void solve() {
   int n; cin >> n;
   if(!f[n]) {
    cout << p[n].first << " " << p[n].second << "\n";
   }
   else {
    cout << "-1\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  p[2] = {1, 1};
  int r = 2, c = 0;
  for(int i = 3; i <= N; i += 2) {
    if(!f[i]) {
        if(r == c) r++, c = 0;
        c++;
        p[i] = {r, c};
    }
  }
  
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}