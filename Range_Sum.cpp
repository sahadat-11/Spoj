//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n; cin >> n;
  vector<ll> v(n + 1);
  for(ll i = 1; i <= n; i++) {
     cin >> v[i];
  }
  //reverse(v.begin() + 1, v.end());
  vector<ll> pre;
  pre.push_back(0LL);
  for(ll i = n; i >= 1; i--) {
    ll x = pre.back() + v[i];
    pre.push_back(x);
  }
  //for(ll i = 0; i <= n; i++) cout << pre[i] << " ";
  ll q; cin >> q;
  while(q--) {
     ll tp; cin >> tp;
     if(tp == 1) {
        ll l, r; cin >> l >> r;
        l = pre.size() - 1 - l + 1;// -1 because we insert 0 at first
        r = pre.size() - 1 - r;
        cout << pre[l] - pre[r] << "\n";
     }
     else {
        ll x; cin >> x;
        ll val = x + pre.back();
        pre.push_back(val);
     }
  }
  return 0;
}
// https://prnt.sc/s7I2s9dyOVkO