//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int pre[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  pre[0] = a[0]; // 0 based index;
  for(int i = 1; i < n; i++) {
  	pre[i] = pre[i - 1] + a[i];
  }
  int q; cin >> q;
 while(q--) {
 	int l, r; cin >> l >> r;
 	if(l == 0) cout << pre[r] << "\n";
 	else cout << pre[r] - pre[l - 1] << "\n";
 }
  return 0;
}