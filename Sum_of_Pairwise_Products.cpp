//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int q; cin >> q;
   while(q--) {
     int l, r; cin >> l >> r;
     ll sum = 0;
     for(int i = l; i <= r; i++) {
       for(int j = i; j <= r; j++) {
         sum += (1ll * a[i] * a[j]);
       }
     }
     cout << sum << "\n";
   }
   return 0;
}
// // (q * r * r); // getting TLE

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
ll pre_sum[N], square_pre_sum[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   for(int i = 1; i <= n; i++) {
     pre_sum[i] = pre_sum[i - 1] + a[i];
     square_pre_sum[i] = square_pre_sum[i - 1] + 1ll * a[i] * a[i];
   }
   int q; cin >> q;
   while(q--) {
     int l, r; cin >> l >> r;
     l++; r++; // 1 indexing
     ll sum1 = pre_sum[r] - pre_sum[l - 1];
     ll sum2 = square_pre_sum[r] - square_pre_sum[l - 1];
     cout << (sum1 * sum1 + sum2) / 2 << "\n";
   }
   return 0;
}
// (q);

// https://prnt.sc/bXBITGGjPr63
// https://prnt.sc/UnwaLxk5uapm