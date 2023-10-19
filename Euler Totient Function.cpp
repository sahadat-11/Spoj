//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int phi[N];
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
  //  for(int i = 1; i <= n; i++) cout << phi[i] << "\n";
    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	cout << phi[n] << "\n";
    }
    return 0;
}