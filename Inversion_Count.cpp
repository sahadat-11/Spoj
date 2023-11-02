#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0;
    // o_set<int> st;// if values are unique
    // for(int i = n - 1; i >= 0; i--) {
    //   st.insert(a[i]);
    //   int x = st.order_of_key(a[i]);
    //   sum += x;
    // }
    // cout << sum << "\n";
    o_set<pair<int, int>> st;// if values are not unique
    for(int i = n - 1; i >= 0; i--) {
      st.insert({a[i], i});
      int x = st.order_of_key({a[i], i});
      sum += x;
    }
    cout << sum << "\n";
  }
  
  return 0;
}
//https://prnt.sc/hBr7AnM55AEK