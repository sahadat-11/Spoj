//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; 
      if(n % 2) {
         cout << n << "\n";
      }
      else {
         string s;
      while(n) {
         s += (n % 2 + '0');// decimal to binary;
         n >>= 1;
      }
      reverse(s.begin(), s.end());
      // binary to decimal;
      int dec = 0;
      for(int i = 0; i < s.size(); i++) {
         int bit = s[i] - '0';
         dec += (bit * (1 << i));
      }
      cout << dec << "\n";
      }
   }
   return 0;
}
