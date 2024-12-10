//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  map<int, int> mp;
  int dif = 0, same = 0;
  for(int i = 1; i <= n; i++) {
    string s; cin >> s;
    int x; cin >> x;
    if(s == "insert") {
      mp[x]++;
      if(mp[x] == 2) same++;
      else if(mp[x] == 1) dif++;
    }
    else {
      if(mp[x] >= 1) {
        mp[x]--;
        if(mp[x] == 1) same--;
        else if(mp[x] == 0) dif--;
      }
    }
    if(dif >= 2 and same >= 1) {
      cout << "both\n";
    }
    else if(same >= 1) {
        cout << "homo\n";
    }
    else if(dif >= 2) {
        cout << "hetero\n";
    }
    else {
        cout << "neither\n";
    }
  }
  return 0;
}
// O(N * N)