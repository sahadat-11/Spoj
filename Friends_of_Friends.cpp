//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   set<int> fr, froffr;
   for(int i = 0; i < n; i++) {
      int x, y; cin >> x >> y;
      fr.insert(x);
      while(y--) {
         int z; cin >> z;
         froffr.insert(z);
      }
   }
   for(auto u : fr) {// romove his frined if his friend include in the friend of friend set
      if(froffr.find(u) != froffr.end()) {
         froffr.erase(u);
      }
   }
   cout << froffr.size() << "\n";
   return 0;
}