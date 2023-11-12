//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
double eps = 1e-7;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     ll a, b, c; cin >> a >> b >> c;
     double l = 1, r = 1e9, ans = 0;
     while(r - l > eps) {
       double mid = l + (r - l) / 2;
       double x = (a * mid) + b * sin(mid);
       if(x <= c) {
         l = mid;
       }
       else r = mid;
     }
     cout << fixed << setprecision(6) << l << "\n";
  }
  return 0;
}
