//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n; cin >> n; 
      int cnt = 0;
      while(n) {
      	cnt += n / 5;
      	n /= 5;
      }
      cout << cnt << "\n";
   }
   return 0;
}