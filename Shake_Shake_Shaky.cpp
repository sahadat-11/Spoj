//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     ll n, k; cin >> n >> k; ll a[n];
     for(ll i = 0; i < n; i++) cin >> a[i];
     ll l = 1, r = 1e9, ans = 0;
     while(l <= r) {
       ll mid = l + (r - l) / 2;
       ll cnt = 0;
       for(int i = 0; i < n; i++) {
         cnt += (a[i] / mid);
         if(cnt >= k) break;
       }
       if(cnt >= k) {
         ans = mid;
         l = mid + 1;
       }
       else r = mid - 1;
     }
     cout << ans << "\n";
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k; 
bool isvalid(ll a[], ll mid) {
  ll cnt = 0;
  for(int i = 0; i < n; i++) {
     cnt += (a[i] / mid);
     if(cnt >= k) return true;
  }
  return cnt >= k;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
     cin >> n >> k; ll a[n];
     for(ll i = 0; i < n; i++) cin >> a[i];
     ll l = 1, r = 1e9, ans = 0;
     while(l <= r) {
       ll mid = l + (r - l) / 2;
       if(isvalid(a, mid)) {
         ans = mid;
         l = mid + 1;
       }
       else r = mid - 1;
     }
     cout << ans << "\n";
  }
  return 0;
}

//https://prnt.sc/zz6DWL3IZ8dC