// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 405, mod = 1e9 + 7;
// #define int long long
// int a[N], dp[N][N];
// const int inf = 1e18;

// int func(int l, int r) {
//   if(l == r) return 0;
//   int &ans = dp[l][r];
//   if(ans != -1) return ans;
//   int cur_cost = 0;
//   for(int i = l; i <= r; i++) {
//     cur_cost += a[i];
//   }
//   ans = inf;
//   for(int i = l; i <= r; i++) {
//     ans = min(ans, cur_cost + func(l, i) + func(i + 1, r));
//   }
//   return ans;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   memset(dp, -1, sizeof dp);
//   int n; cin >> n;
//   for(int i = 1; i <= n; i++) {
//     cin >> a[i];
//   }
//   cout << func(1, n);
//   return 0;
// }

// // O(N * N * N * N);


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 105, mod = 1e9 + 7;
// #define int long long
// int a[N], dp[N][N], pre_sum[N];
// const int inf = 1e18;

// int func(int l, int r) {
//   if(l == r) return 0;
//   int &ans = dp[l][r];
//   if(ans != -1) return ans;
//   ans = inf;
//   for(int i = l; i <= r; i++) {
//     //int a = get_sum(l, i), b = get_sum(i + 1, r);
//     int a = (pre_sum[i] - pre_sum[l - 1]) % 100;
//     int b = (pre_sum[r] - pre_sum[i]) % 100;
//     int cur_cost = a * b;
//   	ans = min(ans, cur_cost + func(l, i) + func(i + 1, r));
//   }
//   return ans;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n;
//   while(cin >> n) {
//     memset(dp, -1, sizeof dp);
//     for(int i = 1; i <= n; i++) {
//       cin >> a[i];
//       pre_sum[i] = (pre_sum[i - 1] + a[i]);
//     }
//     cout << func(1, n) << "\n";
//   }
//   return 0;
// }

// // O(N * N * N);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 405, mod = 1e9 + 7;
#define int long long
int a[N], dp[N][N], pre_sum[N];
const int inf = 1e18;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  while(cin >> n) {
     for(int i = 1; i <= n; i++) {
        cin >> a[i];
        pre_sum[i] = pre_sum[i - 1] + a[i];
    }
    
    for(int len = 2; len <= n; len++) {
      for(int i = 1; i + len - 1 <= n; i++) {
        int l = i, r = i + len - 1;
        int &ans = dp[l][r];
        ans = inf;
        for(int k = l; k < r; k++) {
          int a = (pre_sum[k] - pre_sum[l - 1]) % 100;
          int b = (pre_sum[r] - pre_sum[k]) % 100;
          ans = min(ans, a * b + dp[l][k] + dp[k + 1][r]);
        }
      }
    }
    cout << dp[1][n] << "\n";
  }
  return 0;
}
