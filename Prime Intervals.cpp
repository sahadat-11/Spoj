//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 7;
bitset<N> f;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true;
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
         for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
      }
   }
   vector<int> prime;
   for(int i = 2; i < N; i++) {
   	 if(!f[i]) prime.push_back(i);
   }
   int t; cin >> t;
   while(t--) {
   	 ll l, r; cin >> l >> r;
   	 int mx = r - l + 1;
   	 bool a[mx + 1] = {false};
   	 for(auto p : prime) {
   	 	int x = (l + p - 1) / p * p;
   	 	for(int i = x; i <= r; i += p) {
   	 		if(i != p) {
   	 			a[i - l] = true;
   	 		}
   	 	}
   	 }
   	 for(int i = 0; i < mx; i++) {
   	 	if(!a[i]) {
   	 		cout << i + l << "\n";
   	 	}
   	 }
   }
   return 0;
 }
 