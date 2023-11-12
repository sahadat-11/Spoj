//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
ll pre_sum[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll sum = 0;
  for(int i = 1; i < N; i++) {
    sum += i;
    pre_sum[i] = sum;
  }
  //for(int i = 0; i < N; i++) cout << pre_sum[i] << "\n";
  //cout << pre_sum[N - 2] << endl;
  int t; cin >> t;
  while(t--) {
     ll x; cin >> x;
     ll l = 0, r = N, ans = -1;
     while(l <= r) {
       ll mid = l + (r - l) / 2;
       if(pre_sum[mid] > x) {
         r = mid - 1;
       }
       else if(pre_sum[mid] < x) {
         l = mid + 1;
       }
       else {
         ans = mid;
         break;
       }
     }
     if(ans == -1) cout << "NAI\n";
     else cout << ans << "\n";
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
ll pre_sum[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     ll x; cin >> x;
     ll l = 0, r = N, ans = -1;
     while(l <= r) {
       ll mid = l + (r - l) / 2;
       ll sum = mid * (mid + 1) / 2;
       if(sum > x) {
         r = mid - 1;
       }
       else if(sum < x) {
         l = mid + 1;
       }
       else {// sum == x;
         ans = mid;
         break;
       }
     }
     if(ans == -1) cout << "NAI\n";
     else cout << ans << "\n";
  }
  return 0;
}