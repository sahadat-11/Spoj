//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll a, b; cin >> a >> b;
      bool flag = false;
      for(ll i = a; i <= b; i++) {
         flag = false;
         for(ll j = 2; j * j <= i; j++) {
            if(i % j == 0) {
               flag = true;
               break;
            }
         }
         if(!flag and i != 1) cout << i << "\n";
      }
      cout << "\n";
   }
   return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
bool isprime(int n) {
   if(n <= 1) return false;
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) return false;
   }
   return true;
}
void solve() {
   int a, b; cin >> a >> b;
   for(int i = a; i <= b; i++) {
      if(isprime(i)) cout << i << "\n";
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}