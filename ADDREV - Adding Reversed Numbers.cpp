//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int a, b; cin >> a >> b;
      int c = 0;
      while(a) {
      	c = c * 10 + (a % 10);
      	a /= 10;
      }
      int d = 0;
      while(b) {
      	d = d * 10 + (b % 10);
      	b /= 10;
      }
      //cout << c << " " << d << "\n";
      int sum = c + d;
      int ans = 0;
      while(sum) {
      	ans = ans * 10 + (sum % 10);
      	sum /= 10;
      }
      cout << ans << "\n";
   }
   return 0;
}