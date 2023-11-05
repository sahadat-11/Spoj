//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  map<int, queue<int>> mp;
  for(int i = 1; i <= n; i++) {
    mp[a[i]].push(i);
  }
  while(m--) {
    char tp; cin >> tp;
    if(tp == 'S') {
      int x; cin >> x;
      if(mp[x].size()) {
        cout << mp[x].front() << "\n";
      }
      else {
         cout << "NONE\n";
      }
    }
    else if(tp == 'I') {
      int x; cin >> x;
      n++;
      mp[x].push(n);
      cout << n << "\n";
    }
    else {
      int x; cin >> x;
      if(mp[x].size()) {
        cout << mp[x].front() << "\n";
        mp[x].pop();
      }
      else {
        cout << "NONE\n";
      }
    }
  }
  return 0; 
}
