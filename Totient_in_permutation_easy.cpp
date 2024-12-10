//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 1;
int phi[N];
bool isValid[N];
int prephi[N];

int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 2; i < N; i += 2) phi[i] = 2;
    for(int i = 3; i < N; i += 2) {
    	if(phi[i] == i) {
    		for(int j = i; j < N; j += i) {
    			phi[j] -= phi[j] / i;
    		}
    	}
    }
    for(int i = 1; i < N; i++) {
        string x = to_string(phi[i]);
        string y = to_string(i);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if(x == y) {
            isValid[i] = true;
        }
    }
    double pre = N;
    phi[1] = 1;
    for(int i = 2; i < N; i++) {
       if(isValid[i]) {
        double x = 1.0 * i / phi[i];
        //cout << i << " " << x << "\n";
        if(x <= pre) {
            pre = x;
            prephi[i] = i;
        }
        else {
            prephi[i] = prephi[i - 1];
        }
       }
       else {
           prephi[i] = prephi[i - 1];
       }
    }
    // for(int i = 1; i < 300; i++) {
    //     cout << prephi[i] << "\n";
    // }
    int t; cin >> t;
    int cs = 0;
    while(t--) {
        int n; cin >> n;
        cout << prephi[n] << "\n";
    }
    return 0;
}