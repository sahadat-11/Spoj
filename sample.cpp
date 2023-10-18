//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 1e5 + 7;
int spf[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   map<ll, vector<ll>> mp;
   for(ll i = 1; i <= 100000; i++) {
   	 ll x = i;
   	 ll div = 1;
  	 while(x > 1) {
  		ll p = spf[x];
  		ll exp = 0;
  		while(x %  p == 0) {
  			exp++;
  			x /= p;
  		}
  		div *= (2 * exp + 1);
  	 }
  	 mp[div].push_back(i * i);
   }
   // for(auto u : mp[3]) {
   	// cout << u << "\n";
   // }
  int t; cin >> t;
  while(t--) {
  	ll k, l, r; cin >> k >> l >> r;
  	//ll x = sqrtl(r);
  	//auto v = mp[k];
  	//for(auto u : v) cout << u << endl;
  	ll ans = 0;
  	ans = upper_bound(mp[k].begin(), mp[k].end(), r) - lower_bound(mp[k].begin(), mp[k].end(), l);
  	cout << ans << "\n";
  }
  return 0;
}
