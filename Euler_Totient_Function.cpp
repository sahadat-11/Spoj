//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main() {
	int t; cin >> t;
	while(t--) {
		ull n; cin >> n;
		ull res = n;
		for(ull i = 2; i * i <= n; i++) {
			if(n % i == 0) {
		    while(n % i == 0) n /= i;
			res = res * (i - 1);
			res /= i;
		  }
		}
		if(n > 1) {
          res = res * (n - 1);
          res /= n;
		}
		cout << res << "\n";
	} 
	return 0;
}

