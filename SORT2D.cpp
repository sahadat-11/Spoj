//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      vector<pair<int, int>> v;
      for(int i = 0; i < n; i++) {
         int x, y; cin >> x >> y;
         v.push_back({x, -y});
      }
      sort(v.begin(), v.end());
      for(auto [x, y] : v) {
         cout << x << " " << -y << "\n";
      }
   } 
   return 0;
}


