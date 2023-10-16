//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   	 int n; cin >> n; int a[n], b[n];
   	 for(int i = 0; i < n; i++) cin >> a[i];
   	 for(int i = 0; i < n; i++) cin >> b[i];
   	 sort(a, a + n);
   	 sort(b, b + n); // sort for max sum;
   	 int sum = 0;
   	 for(int i = 0; i < n; i++) sum += (a[i] * b[i]);
   	 cout << sum << "\n";
   } 
   return 0;
}