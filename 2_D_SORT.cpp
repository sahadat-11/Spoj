//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
    int n; cin >> n;
    vector<pair<int, int>> p;
    for(int i = 0; i < n; i++) {
      int a, b; cin >> a >> b;
      p.push_back({a, -b});
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < n; i++) {
      cout << p[i].first << " " << -p[i].second << "\n";
    }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}