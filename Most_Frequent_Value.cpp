//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
const int N = 1e5 + 7;
int K, ans[N], a[N], fre[N], fre_of_fre[N], res;
struct Query{
    int index, L, R;
    bool operator < (const Query &other) const {
    int block_own = L / K;
    int block_other = other.L / K;
    if(block_own == block_other)
            return R < other.R;
    return block_own < block_other;
  }
}
query[N];
void add(int index){
    int val = a[index];
    fre[val]++;
    fre_of_fre[fre[val]]++;
    res = max(res, fre[val]);
}
void remove(int index){
    int val = a[index];
    fre_of_fre[fre[val]]--;
    fre[val]--;
    if(fre_of_fre[res] == 0) res--;
}
void solve() {
    int n, q; cin >> n >> q;
    K = sqrt(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < q; i++){
        cin >> query[i].L >> query[i].R;
        query[i].index = i;
    }
    sort(query, query + q);
    int L = 0, R = -1;
    for (int i = 0; i < q; i++) {
      while (R < query[i].R) add(++R);
      while (L < query[i].L) remove(L++);
      while (R > query[i].R) remove(R--);
      while (L > query[i].L) add(--L);
      ans[query[i].index] = res;
    }
    for (int i = 0; i < q; i++) {
      cout << ans[i] << "\n";
    }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0; 
}