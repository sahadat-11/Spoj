//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
     cout << "Scenario #" << ++cs << ": ";
     int n, r; cin >> n >> r;
     map<int, map<int, int>> mp;
     while(r--) {
       int i, c; cin >> i >> c;
       mp[i][c]++;
     }
     // for(auto u : mp) {
     //   auto y = u.second;
     //   for(auto x : y) {
     //     cout << x.first << " " << x.second << endl;
     //   }
     //   cout << endl;
     // }
     bool flag = true;
     for(auto u : mp) {
       auto x = u.second;
       for(auto i : x) {
         if(i.second > 1) {
           flag = false;
           break;
         }
       }
     }
     if(flag) cout << "possible\n";
     else cout << "impossible\n";
  }
  return 0; 
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
     cout << "Scenario #" << ++cs << ": ";
     int n, r; cin >> n >> r;
     map<pair<int,int>, int> mp;
     bool flag = true;
     while(r--) {
       int i, c; cin >> i >> c;
       mp[{i, c}]++;// pair(i, c) er value ++ kora
       if(mp[{i, c}] > 1) flag = false;
     }
     if(flag) cout << "possible\n";
     else cout << "impossible\n";
  }
  return 0; 
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while(t--) {
     cout << "Scenario #" << ++cs << ": ";
     int n, r; cin >> n >> r;
     map<pair<int,int>, bool> mp;
     bool flag = true;
     while(r--) {
       int i, c; cin >> i >> c;
       if(mp[{i, c}]) flag = false;
       mp[{i, c}] = true;
     }
     if(flag) cout << "possible\n";
     else cout << "impossible\n";
  }
  return 0; 
}