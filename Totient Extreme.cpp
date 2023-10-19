//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ll long long
const int N = 1e4 + 7;
int phi[N];
ll prephi[N];
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
    //for(int i = 1; i <= 20; i++) cout << phi[i] << "\n";
    prephi[0] = (ll)0;
    for(int i = 1; i <= N; i++) {
    	prephi[i] = prephi[i - 1] + (ll)phi[i];
    }
    int t; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	cout << prephi[n] * prephi[n] << endl;
    }
    return 0;
}
// https://prnt.sc/FDGG0qsT-sSO