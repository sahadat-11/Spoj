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
      for(int i = 0; i < n; i++) cin >> a[i];
      int k; cin >> k;
      vector<int> v;
      v.push_back(a[0]);
      for(int i = 1; i < n; i++) {
         if(a[i] > v.back()) {
            v.push_back(a[i]);
         }
         else {
            int idx = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
            v[idx] = a[i];
         }
      }
      if(v.size() < k) cout << -1 << "\n";
      else cout << v[k - 1] << "\n";
   }
   return 0;
}
//https://prnt.sc/Hdf8820S9HUo
