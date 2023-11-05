//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   map<string, int> mp;
   for(int i = 1; i <= n; i++) {
       int key; cin >> key;
       if(key != 3) {
         string s; int x; cin >> s >> x;
         mp[s] = x;
       }
       else {
         string x; cin >> x;
         string ans; int mn = INT_MAX;
         for(auto u : mp) {
            if(u.second < mn) {
                mn = u.second;
                ans = u.first;
            }
         }
         cout << ans << " " << i << "\n";
         mp.erase(ans);
       }
   }
   return 0;
}