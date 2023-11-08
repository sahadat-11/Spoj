//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n, k; cin >> n >> k;
   map<string, ll> mp;
   for(ll i = 0; i < n; i++) {
      string s; ll x; cin >> s >> x;
      if(mp[s]) {
         mp[s] += x;
      }
      else {
         mp[s] = x;
      }
   }
   vector<pair<ll, string>> v;
   for(auto u : mp) {
     v.push_back({u.second, u.first});
   }
   sort(v.rbegin(), v.rend());
   // for(auto u : v) {
   //   cout << u.first << " " << u.second << endl;
   // }
   ll sum = 0;
   ll x = v.size();
   for(ll i = 0; i < min(x, k); i++) {
      sum += v[i].first;
   }
   cout << sum << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n, k; cin >> n >> k;
   map<string, ll> mp;
   for(ll i = 0; i < n; i++) {
      string s; ll x; cin >> s >> x;
      if(mp[s]) {
         mp[s] += x;
      }
      else {
         mp[s] = x;
      }
   }
   vector<ll> v;
   for(auto u : mp) {
      v.push_back(u.second);
   }
   sort(v.rbegin(), v.rend());
   ll x = v.size(), sum = 0;
   for(ll i = 0; i < min(x, k); i++) {
      sum += v[i];
   }
   cout << sum << "\n";
   return 0;
}