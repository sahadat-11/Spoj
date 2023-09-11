//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
vector<int> adj[N];
int col[N];
bool vis[N], ok;

void dfs(int u) {
  vis[u] = true;
  for(auto v : adj[u]) {
    if(!vis[v]) {
      col[v] = col[u] ^ 1;
      dfs(v);
    }
    else {
      if(col[u] == col[v]) ok = false;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cout << "Scenario #" << ++cs << ":\n";
    int n, m; cin >> n >> m;
    while(m--) {
      int u, v; cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    ok = true;
    for(int i = 1; i <= n; i++) {
      if(!vis[i]) dfs(i);
    }
    if(ok) cout << "No suspicious bugs found!\n";
    else cout << "Suspicious bugs found!\n";
    for(int i = 1; i <= n; i++) {
      adj[i].clear();
      vis[i] = false;
      col[i] = 0;
    }
  }
  return 0;
}

