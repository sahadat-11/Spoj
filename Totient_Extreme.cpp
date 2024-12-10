//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e4 + 7;
int phi[N];
int prephi[N];
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 1; i < N; i++) phi[i] = i;
    for(int i = 2; i < N; i++) {
    	if(phi[i] == i) {
    		for(int j = i; j < N; j += i) {
    			phi[j] -= phi[j] / i;
    		}
    	}
    }
    for(int i = 1; i < N; i++) {
        prephi[i] = prephi[i - 1] + phi[i];
    }
    int t; cin >> t;
    int cs = 0;
    while(t--) {
        int n; cin >> n;
        cout << prephi[n] * prephi[n] << "\n";
    }
    return 0;
}