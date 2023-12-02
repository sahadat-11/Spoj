//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 10000007;
int binexp(int a, int b) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * 1ll * a) % mod; // type cast for lleger overflow
		}
		a = (a * 1ll * a) % mod;
		b >>= 1; // if b in odd(if 0th bit is set)
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; 
  while(cin >> n >> k) {
  	if(n == 0 and k == 0) break;
  	int x = (binexp(n, k) + 2ll * binexp(n - 1, k)) % mod;
    int y = (binexp(n, n) + 2ll * binexp(n - 1, n - 1)) % mod;
    cout << (1ll * x + y) % mod << "\n";
  }
  return 0;
}
// https://prnt.sc/kZohBowXfmKT