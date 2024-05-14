//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e3 + 7;
bool vis[N], ok;
int col[N];
vector<int> g[N];

void dfs(int u) {
  vis[u] = true;
  for(auto v : g[u]) {
    if(!vis[v]) {
      col[v] = col[u] ^ 1;
      dfs(v);
    } 
    else {
        if(col[u] == col[v]) {
          ok = false;
        }
    }
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cout << "Scenario #" << ++ cs << ":\n";
    int n, m; cin >> n >> m;
    while(m--) {
      int u, v; cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    ok = true;
    for(int i = 1; i <= n; i++) {
      if(!vis[i]) {
        dfs(i);
      }
    }
    if(ok) cout << "No suspicious bugs found!\n";
    else cout << "Suspicious bugs found!\n";
    for(int i = 1; i <= n; i++) {
      vis[i] = false;
      g[i].clear();
      col[i] = 0;
    }
  }
  return 0;
}
