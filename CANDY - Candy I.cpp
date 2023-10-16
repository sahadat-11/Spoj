//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   while(cin >> n and n > 0) {
   	 int a[n];
   	 int sum = 0;
   	 for(int i = 0; i < n; i++) {
   	 	cin >> a[i];
   	 	sum += a[i];
   	 }
   	 if(sum % n) cout << "-1\n";
   	 else {
   	 	int r = sum / n;
   	 	int cnt = 0;
   	 	for(int i = 0; i < n; i++) {
   	 		if(a[i] < r) cnt += (r - a[i]);
   	 	}
   	 	cout << cnt << "\n";
   	 }
   }
   return 0;
}