// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e4 + 7;
// int main() {
	// ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // int n; cin >> n;
    // int sum = 0;
    // for(int i = 1; i <= n; i++) {
    	// sum += (__gcd(i, n));
    // }
    // cout << sum << endl;
    // return 0;
// }
// // O(n);

// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e6 + 7;
// int phi[N];
// int Euler(int d, int n) {
  // int x = n / d;
  // int res = x;
    // for(int i = 2; i * i <= x; i++) {
    	// if(x % i == 0) {
    		// while(x % i == 0) {
    			// x /= i;
    		// }
    		// // res *= (i - 1);
    		// // res /= i;
    		// res -= res / i;
    	// }
    // }
    // if(x > 1) {
    	// // res *= (n - 1);
    	// // res /= n;
    	// res -= res / x;
    // }
    // return res;
// }
// int main() {
	// ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // int n; cin >> n;
    // int ans = 0;
    // for(int i = 1; i * i <= n; i++) {
    	// if(n % i == 0) {
    		// int d1 = i;
    		// int d2 = n / i;
    		// ans += d1 * Euler(d1, n);
    		// if(d1 != d2) {
    			// ans += d2 * Euler(d2, n);
    		// }
    	// }
    // }
    // cout << ans << "\n";
    // return 0;
// }
// // O(n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ll long long
const int N = 1e4 + 7;
int phi[N];
ll prephi[N];
int Euler(int d, int n) {
	int x = n / d;
	return phi[x];
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 1; i <= N; i++) phi[i] = i;
    for(int i = 2; i <= N; i++) {
    	if(phi[i] == i) {
    		for(int j = i; j <= N; j += i) {
    			//phi[j] /= i;
    			//phi[j] *= (i - 1);
    			phi[j] -= phi[j] / i;
    		}
    	}
    }
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i * i <= n; i++) {
    	if(n % i == 0) {
    		int d1 = i;
    		int d2 = n / i;
    		ans += d1 * Euler(d1, n);
    		if(d1 != d2) {
    			ans += d2 * Euler(d2, n);
    		}
    	}
    }
    cout << ans << "\n";
    
    return 0;
}
//O(sqrt(n))
//https://prnt.sc/KokYJ92LPSvq