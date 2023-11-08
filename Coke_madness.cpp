//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
      cout << "Scenario #" << ++cs << ": ";
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      ll sum = 0, mx = 1;// never 0 or less
      for(int i = 0; i < n; i++) {
         if((sum + a[i]) <= 0) {
               mx = max(mx, abs(a[i] + sum) + 1);
         }
         sum += a[i];
      }
      cout << mx << "\n";
   }
   return 0;
}