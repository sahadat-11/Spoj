//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<tuple<int, int, char, int, string>> p;
  for(int i = 0; i < n; i++) {
    int val, w, d; char c; string col;
    cin >> val >> w >> c >> d >> col;
    p.push_back({val, w, c, d, col});
  }
  sort(p.begin(), p.end());
  for(int i = 0; i < n; i++) {
    cout << get<0>(p[i]) << " " << get<1>(p[i]) << " " << get<2>(p[i]) << " " << get<3>(p[i]) << " " << get<4>(p[i]) << "\n";
  }
  return 0;
}