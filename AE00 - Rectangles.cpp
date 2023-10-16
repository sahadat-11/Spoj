//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int i = 1; i * i <= n; i++) {
   	 cnt += (n / i - i + 1);
   }
   cout << cnt << "\n";
   return 0;
}