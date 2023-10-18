//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   vector<int> v;
   for(int i = 30; i <= 3000; i++) {
   	 int x = i, c = 0;
   	 for(int j = 2; j * j <= x; j++) {
   	 	if(x % j == 0) {
   	 		c++;
   	 		while(x % j == 0) {
   	 			x /= j;
   	 		}
   	 	}
   	 }
   	 if(x > 1) c++;
   	 if(c >= 3) v.push_back(i);
   }
   int t; cin >> t;
   while(t--) {
   	 int n; cin >> n; 
   	 cout << v[n - 1] << "\n";
   }
   return 0;
}