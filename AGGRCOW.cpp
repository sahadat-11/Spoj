//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, cow;
bool isvalid(int pos[], int h) {
	int cnt = 0, last = -1;
	for(int i = 0; i < n; i++) {
		if((pos[i] - last) >= h or last == -1) {
			cnt++;
			last = pos[i];
			if(cnt == cow) break;
		}
	}
	return cnt == cow;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	cin >> n >> cow; int pos[n];
  	for(int i = 0; i < n; i++) cin >> pos[i];
  	sort(pos, pos + n);
  	ll l = 0, h = 1e9, ans = -1;
  	while(l <= h) {
  		ll mid = l + (h - l) / 2;
  		if(isvalid(pos, mid)) {
  			ans = mid;
  			l = mid + 1;
  		}
  		else h = mid - 1;
  	}
  	cout << ans << "\n";
  }
  return 0;
}
