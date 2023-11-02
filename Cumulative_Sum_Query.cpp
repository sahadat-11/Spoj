//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   ll pre_sum[n + 1] = {0};
   for(int i = 1; i <= n; i++) {
     pre_sum[i] = pre_sum[i - 1] + a[i];
   }
   int q; cin >> q;
   while(q--) {
     int l, r; cin >> l >> r;
     l++; r++;// for 1 idexing
     cout << pre_sum[r] - pre_sum[l - 1] << "\n";
   }
   return 0;
}