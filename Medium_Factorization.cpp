//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e7 + 7;
int spf[N];
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   int n;
   while(cin >> n) {
        vector<int> prime_facotrs;
        prime_facotrs.push_back(1);
        while(n > 1) {
            int prime = spf[n];
            while(n % prime == 0) {
            prime_facotrs.push_back(prime);
            n /= prime;
            }
        }
        int sz = prime_facotrs.size();
        for(int i = 0; i < sz; i++) {
            cout << prime_facotrs[i];
            if(i != sz - 1) cout << " x ";
        }
        cout << "\n";
   }
   return 0;
}
