//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b, c; 
   while(cin >> a >> b >> c) {
   	   if(a == 0 and b == 0 and c == 0) break;
   	  int d1 = b - a, d2 = c - b;
   	  float r1 = 1.0*b / a, r2 = 1.0*c / b;
   	  if(d1 == d2) {
   	  	cout << "AP " << c + d1 << "\n";
   	  }
   	  else cout << "GP " << 1.0*c * r1 << "\n"; 
   }
   return 0;
}