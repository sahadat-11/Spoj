//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  map<int, int> mp;
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int cnt = 0;
  for(int i = 0; i < n; i++) {
     if(mp.find(a[i] - k) != mp.end()) cnt += mp[a[i] - k];
     mp[a[i]]++;
     //cout << cnt << "\n";
  }
  cout << cnt << "\n";
  return 0; 
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool binsearch(int a[], int n, int x) {
   int l = 0, r = n - 1;
   while(l <= r) {
      int m = (l + r) / 2;
      if(a[m] == x) return true;
      else if(a[m] > x) r = m - 1;
      else l = m + 1;
   }
   return false;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if(binsearch(a, n, a[i] + k)) cnt++;
  }
  cout << cnt << "\n";
  return 0; 
}
