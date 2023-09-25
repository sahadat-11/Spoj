//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MX = 1e10;
const int N = 1e5 + 7;
int spf[N];
vector<ll> v[N];
int main() {
	for(int i = 1; i < N; i++) spf[i] = i;
	for(int i = 2; i < N; i++) {
	  if(spf[i] == i) {
	  for(int j = i; j < N; j += i) spf[j] = min(spf[j], i);
	  }
    }
	for(int i = 1; 1ll * i * i <= MX; i++) {
		int x = i;
		int number_of_divisors = 1; // number of divisor for x^2;
		while(x > 1) {
			int p = spf[x];
			int exp = 0;
			while(x % p == 0) {
				x /= p;
				exp++;
			}
			number_of_divisors *= (2 * exp + 1);
		}
		v[number_of_divisors].push_back(1ll * i * i);
	}
	//for(auto u : v[9]) cout << u << " "; // which numbers there are number of divisor 9;
	int t; cin >> t;
	while(t--) {
		int k; ll l, r; cin >> k >> l >> r;
		//int ans = 0;
		// for(auto u : v[k]) { // bar bar full vector er size a loop choltese;
		// 	if(u >= l and u <= r) ans++; for we get tle;
		// }
        int ans = 0;
		ans = upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l);
		cout << ans << "\n";
	}
	return 0;
}
// https://prnt.sc/0pdUwtITfAdN