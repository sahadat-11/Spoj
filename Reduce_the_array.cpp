//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      priority_queue<int, vector<int>, greater<int>> pq;
      for(int i = 0; i < n; i++) {
         pq.push(a[i]);
      }
      ll sum = 0;
      while(pq.size() > 1) {// if contain minimum 2 element
         int x = pq.top(); // curruent smallest element
         sum += x;
         pq.pop();
         int y = pq.top(); // curruent 2nd smallest element
         sum += y;
         pq.pop();
         pq.push(x + y);
      }
      cout << sum << "\n";
   }
   return 0;
}