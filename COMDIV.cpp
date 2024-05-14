//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int spf[N];
int main() {
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
   int t; cin >> t;
   while(t--) {
   	 int a, b; cin >> a >> b;
   	 int n = __gcd(a, b);
   	 ll div = 1;
   	 while(n > 1) {
   	 	int k = spf[n];
   	 	int exp = 0;
   	 	while(n % k == 0) {
   	 	  exp++;
   	 	  n /= k;
   	 	}
   	 	div *= (exp + 1);
   	 }
   	 cout << div << "\n";
   }
   
   
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int divs[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
     for(int j = i; j < N; j += i) {
       divs[j]++;
     }
   }
  int t; cin >> t;
  while(t--) {
    int a, b; cin >> a >> b;
    int n = __gcd(a, b);
    cout << divs[n] << "\n";
  }
   return 0;
}


