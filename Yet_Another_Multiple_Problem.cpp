//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define int long long

void solve() {
   int n, m, cs = 0;
   while(cin >> n >> m) {
   	   cout << "Case " << ++ cs << ": ";
       vector<bool> bad(10, false);
	   while(m--) {
	   	int k; cin >> k;
	   	bad[k] = true;
	   }

       vector<bool> vis(n, false);
       vector<int> par(n), digit(n);

	   queue<int> q;
	   for(int d = 1; d < 10; d++) { // first digit not equal to 1;
	   	 int x = d % n;
	     if(!bad[d] and !vis[x]) {
	     	q.push(x);
	     	vis[x] = true;
	     	par[x] = -1;
	     	digit[x] = d;
	     }
	   }

	   while(!q.empty()) {
	   	 int x = q.front();
	   	 q.pop();
	   	 for(int d = 0; d < 10; d++) {
	   	   int nxt_num = x * 10 + d;
	   	   nxt_num %= n;
	   	   if(!bad[d] and !vis[nxt_num]) {
	   	   	 vis[nxt_num] = true;
	   	   	 q.push(nxt_num);
	   	   	 par[nxt_num] = x;
	   	   	 digit[nxt_num] = d;
	   	   }
	   	 }
	   }
	   if(vis[0]) {
	   	 vector<int> path;
	   	 int cur = 0;
	   	 while(cur != -1) {
	   	 	path.push_back(digit[cur]);
	   	 	cur = par[cur];
	   	 }
	   	 reverse(path.begin(), path.end());
	   	 for(auto u : path) cout << u;
	   	 cout << "\n";
	   }
	   else cout << "-1\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}