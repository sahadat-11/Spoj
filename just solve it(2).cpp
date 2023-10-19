//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll x; cin >> x;
   int n = sqrt(x); 
   int mx = 0;
   for(int i = 2; i * i <= n; i++) {
   	 if(n % i == 0) {
   	 	mx = max(mx, i);
   	 	while(n % i == 0){
   	 		n /= i;
   	 	}
   	 	//cout << i << " " << cnt << endl;
   	 }
   }
   if(n > 1) {
   	 //cout << n <<  " " << 1 << endl;
   	 mx = max(mx, n);
   }
   cout << mx << "\n";
  return 0;
 }
 // https://prnt.sc/LBntkAsJNqUm