//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e4 + 7;
bitset<N> f;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0]=f[1]=true; 
   for(ll i = 4; i <= N; i += 2) f[i] = true;
   for(ll i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(ll j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   vector<ll> prime;
   for(ll i = 2; i < N; i++) {
   	 if(!f[i]) prime.push_back(i);
   }
   //for(auto p : prime) cout << p << "\n";
   int n; cin >> n;
   vector<pair<int, int>> v;
   for(auto p : prime) {
   	 if(p > n) break;
   	 int c = 0;
   	 for(int i = p; i <= n; i += p) {
   	 	int x = i;
   	 	if(x % p == 0) {
   	 		while(x % p == 0) {
   	 			c++;
   	 			x /= p;
   	 		}
   	 	}
   	 }n
   	 v.push_back({p, c});
   }
   for(int i = 0; i < v.size(); i++) {
   	 cout << v[i].first << "^" << v[i].second;
   	 if(i < v.size() - 1) cout << " * ";
   }
   return 0;
}