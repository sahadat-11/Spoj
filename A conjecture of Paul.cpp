//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 7, mod = 1e9 + 7;
#define int long long

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
   for(int i = 2; i <= N; i++) {
      if(!f[i]) prime.push_back(i);
   }
}

int pre[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();

  vector<int> a, b;
  for(int i = 1; i * i <= N; i++) {
    a.push_back(i * i);
  }
  for(int i = 1; i * i * i * i <= N; i++) {
    b.push_back(i * i * i * i);
  }
  
  for(auto u : a) {
    for(auto v : b) {
      int x = u + v;
      if(x > N) continue;
      if(!f[x]) {
        pre[x] = 1;
      }
    }
  }

  for(int i = 1; i < N; i++) {
    pre[i] += pre[i - 1];
  }
  
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    cout << pre[n] << "\n";
  }
  return 0;
}