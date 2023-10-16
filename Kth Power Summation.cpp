//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e9 + 7;
ll bigmod(ll a, ll b) {
  ll ans = 1;
  while(b) {
  	if(b & 1) {
  		ans = (ans % M * a % M) % M;
  		b--;
  	}
  	else {
  		a = (a % M * a % M) % M;
  		b >>= 1;
  	}
  }
  return ans;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
   	  cout << "Case " << ++cs << ": ";
   	  ll n, k; cin >> n >> k;
      vector<ll> divs;
      for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
         divs.push_back(i);
         if(i != n / i) divs.push_back(n / i);
       }
     }
     sort(divs.begin(), divs.end());
     ll sum = 0;
     for(auto u : divs) {
   	   sum = sum + bigmod(u, k);
     }
     cout << sum << "\n";
    }
   return 0;
}