//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmod(ll a, ll b) {
	ll res = 1;
	while(b) {
		if(b & 1) {
			res = (1ll* res * a) % 10;
			b--;
		}
		else {
			a = (1ll * a * a) % 10;
			b >>= 1;
		}
	}
	return res;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 ll a, b; cin >> a >> b;
   	 ll res = bigmod(a, b);
   	 cout << res % 10 << "\n";
   }
   return 0;
}