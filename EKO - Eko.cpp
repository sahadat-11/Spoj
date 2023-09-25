//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int n, m;
bool isvalid(int a[], int h) {
	ll sum = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] >= h) {
			sum += (a[i] - h);
		}
	}
	return sum >= m;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  ll l = 0, h = 1e9, ans = -1;
  while(l <= h) {
  	ll mid = l + (h - l) / 2;
  	if(isvalid(a, mid)) {
  		ans = mid;
  		l = mid + 1;
  	}
  	else {
  		h = mid - 1;
  	}
  }
  cout << ans << "\n";
  return 0;
}
