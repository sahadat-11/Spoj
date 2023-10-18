//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
bitset<N>f;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   vector <int> v;
   for(int i = 1; i <= N; i++) {
   	 int x = i;
   	 bool flag = true;
   	 for(int j = 2; j * j <= i; j++) {
   	 	int c = 0;
   	 	if(x % j == 0) {
   	 		while(x % j == 0) {
   	 			c++;
   	 			x /= j;
   	 		}
   	 	}
   	 	if(c >= 2) flag = false;
   	 }
   	 if(flag) v.push_back(i);
   }
   //for(int i = 0; i < 10; i++) cout << v[i] <<  " ";
   map<int, vector<int>> mp;
   for(auto u : v) {
   	 int x = u;
   	 while(x) {
   	 	int rem = x % 10;
   	 	x /= 10;
   	 	mp[rem].push_back(u);
   	 }
   }
   // for(auto u : mp[3]) {
   	  // cout << u << endl;
   // }
   int t; cin >> t;
   while(t--) {
   	 int a, b, d; cin >> a >> b >> d;
   	 // for(auto u : mp[d]) {
       // if(u > b) break;
   	   // cout << u << endl;
     // } 
   	 // int ub = upper_bound(mp[d].begin(), mp[d].end(), b) - mp[d].begin();;
   	 // int lb = lower_bound(mp[d].begin(), mp[d].end(), a) - mp[d].begin();
     // cout << ub - lb << "\n";
      auto vv = mp[d];
      //for(auto u : vv) cout << u << " ";
      sort(vv.begin(), vv.end());
      auto x = unique(vv.begin(), vv.end());
      vv.resize(distance(vv.begin(), x));
      int lb = lower_bound(vv.begin(), vv.end(), a) - vv.begin();
      int ub = upper_bound(vv.begin(), vv.end(), b) - vv.begin();
      cout << ub - lb << "\n";
      //cout << (lb) << endl;
   }
   return 0;
}