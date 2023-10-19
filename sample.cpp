//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 1e7 + 7;
bitset<N> f;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[0] = f[1] = true;
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
         for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
      }
   }
   vector<int> prime;
   for(int i = 2; i < N; i++) {
   	 if(!f[i]) prime.push_back(i);
   }
   int t, cs = 0; cin >> t;
   while(t--) {
   	 int n; cin >> n;
   	 cout << "Case " << ++cs << ": ";
   	 int cnt = 0;
   	 for(auto p : prime) {
   	 	if(p > n) break;
   	 	int b = n - p;
   	 	if(!f[b] and p <= b) cnt++;
   	 }
   	 cout << cnt << "\n";
   }
  return 0;
}
