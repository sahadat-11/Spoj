//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const int N = 107;
ull fact[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   fact[0] = 1ull * 1;
   for(int i = 1; i <= N; i++) {
   	 fact[i] = i * fact[i - 1];
   }
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; 
      cout << fact[n] << "\n";
   }
   return 0;
}