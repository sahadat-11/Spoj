//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; 
		int mx_exp = 1;
		for(int i = 2; i * i <= n; i++) {
			if(n % i == 0) {
				int exp = 0;
				while(n % i == 0) {
					exp++;
					n /= i;
				}
				mx_exp = max(mx_exp, exp);
			}
		}
		// if any prime find its not necessary to count; because it exp = 1;
		cout << mx_exp << "\n";
	}
	return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
int spf[N];
int main() {
	for(int i = 1; i < N; i++) spf[i] = i;
	for(int i = 2; i < N; i++) {
		for(int j = i; j < N; j += i) spf[j] = min(spf[j], i);
	}
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; 
		int mx_exp = 1;
		while(n > 1) {
			int k = spf[n];
			int exp = 0;
			while(n % k == 0) {
				n /= k;
				exp++;
			}
			mx_exp = max(mx_exp, exp);
		}
		cout << mx_exp << "\n";
	}
	return 0;
}
// https://prnt.sc/Btv72ElKdxKG 