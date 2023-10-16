//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; 
   while(cin >> n) {
   	 int x = n / 2 + n / 3 + n / 4;
   	 if(x > n) cout << x << "\n";
   	 else cout << n << "\n";
   }
   return 0;
}