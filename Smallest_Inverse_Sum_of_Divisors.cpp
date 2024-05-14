//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e8 + 1, mod = 1e9 + 7;
//#define int long long
int sigma[N], ans[N];
void solve() {
   int n; cin >> n;
   if(ans[n] == 0) cout << "-1\n";
   else cout << ans[n] << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fill(sigma, sigma + N, 1);
  for(int i = 2; i < N; i++) {
    if(sigma[i] != 1) continue;
    for(int j = i; j < N; j += i) {
    	int cur = j;
    	int p = 1;
    	int multi = 1;
    	while(cur % i == 0) {// 1 + p^1 + p^2 + p^3 ....p^e;
    		cur /= i;
    		p *= i;
    		multi += p;
     	}
     	sigma[j] *= multi;
    }
  }
  //for(int i = 1; i <= 100; i++) cout << sigma[i] << endl;
  for(int i = 1; i < N; i++) {
  	if(sigma[i] < N and ans[sigma[i]] == 0) {
  		ans[sigma[i]] = i;
  	}
  }
  //for(int i = 1; i <= 100; i++) cout << ans[i] << endl;
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}