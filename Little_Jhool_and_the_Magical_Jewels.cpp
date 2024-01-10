//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s; cin >> s;
      int r = 0, u = 0, b = 0, y = 0;
      for(auto c : s) {
         if(c == 'r') r++;
         if(c == 'u') u++;
         if(c == 'b') b++;
         if(c == 'y') y++;
      }
      int ru = min(r, u);
      int by = min(b, y);
      int ruby = min(ru, by);
      cout << ruby << "\n";
   }
   return 0;
}


