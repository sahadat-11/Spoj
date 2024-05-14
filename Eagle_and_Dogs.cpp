//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, inf = 1e9;
#define int long long 
vector<pair<int, int>> g[N];
int n; 

int fartest_node(int s, vector<int> &d) {
   d.resize(n + 1, inf);
   vector<bool> vis(n + 1, false);
   queue<int> q;
   q.push(s);
   d[s] = 0;
   vis[s] = true;
   while(!q.empty()) {
     int u = q.front();
     q.pop();
     for(auto [v, w] : g[u]) {
       if(!vis[v]) {
         d[v] = d[u] + w;
         vis[v] = true;
         q.push(v);
       }
     }
   }
   int mx_dis = -1, fartest;
   for(int i = 1; i <= n; i++) {
    if(d[i] > mx_dis) {
      mx_dis = d[i];
      fartest = i;
    }
   }
   return fartest;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
    cin >> n;
    for(int i = 1; i < n; i++) {
      int u, v, w; cin >> u >> v >> w;
      g[u].push_back({v, w});
      g[v].push_back({u, w});
    }
    vector<int> ds, de;
    int s = fartest_node(1, ds); // 1 theke bfs chaliye s er index;
    int e = fartest_node(s, ds); // s theke bfs chaliye e er index;
                                 // s theke sobar distance ds a ase;
    fartest_node(e, de);    // e theke sobar distance de  a ase
    for(int i = 1; i <= n; i++) {
      cout << max(de[i], ds[i]) << " ";
    }
    cout << "\n";
    for(int i = 1; i <= n; i++) {
      g[i].clear();
    }
  }
  return 0;
}
