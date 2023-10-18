//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, M = 1e6;
int cnt[N], mul[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   for(int i = 1; i <= n; i++) {
      int x; cin >> x;
      cnt[x]++;
   }
   for(int i = 1; i < N; i++) {n
      for(int j = i; j < N; j += i) {
         mul[i] += cnt[j];
      }
   }
   for(int i = 1; i <= M; i++) cout << mul[i] << " "; cout << "\n";
   return 0;
}
