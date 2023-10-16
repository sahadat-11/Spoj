//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int a, b; cin >> a >> b;
   	 vector<int> d1, d2;
   	 for(int i = 1; i * i <= a; i++) {
   	 	if(a % i == 0) {
   	 		d1.push_back(i);
   	 		if(i != a / i) d1.push_back(a / i);
   	 	}
   	 }
   	 for(int i = 1; i * i <= b; i++) {
   	 	if(b % i == 0) {
   	 		d2.push_back(i);
   	 		if(i != b / i) d2.push_back(b / i);
   	 	}
   	 }
   	 ll sum1 = 0, sum2 = 0;
   	 for(auto u : d1) sum1 += u;
   	 for(auto u : d2) sum2 += u;
   	 sum1 -= a; sum2 -= b;
   	 if(sum1 == b and sum2 == a) cout << "Friendship is ideal\n";
   	 else cout << "Friendship is not ideal\n";
   }
   return 0;
}