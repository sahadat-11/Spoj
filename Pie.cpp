//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e4 + 7;
const double eps = 1e-4;// 10^-4;//0.0001;
int a[N];
int n, f; 
bool isvalid(double mid) {
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    double vol = 1.0 * a[i] * a[i] * acos(-1);
    cnt += int(vol / mid);
  }
  return cnt >= f;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    cin >> n >> f;
    for(int i = 0; i < n; i++) cin >> a[i];
    f++; // for himself;
    double l = 0, r = 1e9, ans = 0;
    while(r - l > eps) {
       double mid = l + (r - l) / 2.0;
       if(isvalid(mid)) {
         l = mid;
       }
       else r = mid;
    }
    cout << fixed << setprecision(5) << l << "\n";
  }
  return 0;
}

//https://prnt.sc/NUQz0OOGCYEd
//https://prnt.sc/8KjXFKtQPpOo
