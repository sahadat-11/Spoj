//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   map<pair<int, int>, string> mp;
   while(n--) {
      int a, b; string s; cin >> a >> b >> s;
      mp[{a, b}] = s;
   }
   int q; cin >> q;
   while(q--) {
      int a, b; cin >> a >> b;
      cout << mp[{a, b}] << "\n";
   }
   return 0; 
}
