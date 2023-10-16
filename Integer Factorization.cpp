//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n;
   while(cin >> n) {
   	  for(int i = 2; i * i <= n; i++) {
   	  	if(n % i == 0) {
   	  		int cnt = 0;
   	  		while(n % i == 0) {
   	  			cnt++;
   	  			n /= i;
   	  		}
   	  		cout << i << "^" << cnt << " ";
   	  	}
   	  }
   	  if(n > 1) cout << n << "^" << "1 ";
   	  cout << "\n";
   }
   return 0;
}
