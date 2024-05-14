// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// const int N = 1e6 + 7;
// int block, ans[N], cnt[N], a[N], distinct;
// struct Query{
//     int index, L, R;
//     bool operator < (const Query &other) const {
// 		int block_own = L / block;
// 		int block_other = other.L / block;
// 		if(block_own == block_other) {
//            return R < other.R;
// 		}
// 		return block_own < block_other;
// 	}
// }
// query[N];
// void add(int index){
//     cnt[a[index]]++;
//     if(cnt[a[index]] == 1) {
//       distinct++;
//     }
// }
// void remove(int index){
//     cnt[a[index]]--;
//     if(cnt[a[index]] == 0) {
//       distinct--;
//     }
// }
// void solve() {
//     int n; cin >> n;
//     block = sqrtl(n) + 1;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int q; cin >> q;
//     for(int i = 0; i < q; i++){
//         cin >> query[i].L >> query[i].R;
//         query[i].L--; query[i].R--;
//         query[i].index = i;
//     }
//     sort(query, query + q);
//     int L = 0, R = -1;
// 	for (int i = 0; i < q; i++) {
// 	  while (R < query[i].R) add(++R);
// 	  while (L < query[i].L) remove(L++);
// 	  while (R > query[i].R) remove(R--);
// 	  while (L > query[i].L) add(--L);
// 	  ans[query[i].index] = distinct;
// 	}
// 	for (int i = 0; i < q; i++) {
// 	  cout << ans[i] << "\n";
// 	}
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// MO's Algorithm

#include<bits/stdc++.h>
using namespace std;
const int N = 30005, QQ = 2e5 + 9;
int t[N * 4];
int merge(int l, int r) { // change this
  return l + r;
}
void build(int n, int b, int e) {
  if (b == e) {
    t[n] = 0;
    return;
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = merge(t[l], t[r]);
}
void upd(int n, int b, int e, int i, int v) {
  if (i < b or e < i) return;
  if (b == e) {
    t[n] += v;
    return;
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  upd(l, b, mid, i, v);
  upd(r, mid + 1, e, i, v);
  t[n] = merge(t[l], t[r]);
}
int query(int n, int b, int e, int i, int j) {
  if (e < i or j < b) return 0;
  if (b >= i and e <= j) {
    return t[n];
  }
  int mid = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
  return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
int a[N];
vector<pair<int, int>> Q[N];
int ans[QQ];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int q; cin >> q;
  for (int i = 1; i <= q; i++) {
    int l, r; cin >> l >> r;
    Q[r].push_back({l, i});
  }
  build(1, 1, n);
  map<int, int> last_oc;
  for (int r = 1; r <= n; r++) {
    if (last_oc.find(a[r]) != last_oc.end()) {
      upd(1, 1, n, last_oc[a[r]], -1);
    }
    last_oc[a[r]] = r;
    upd(1, 1, n, r, +1);
    for (auto [l, q_id]: Q[r]) {
      ans[q_id] = query(1, 1, n, l, r);
    }
  }
  for (int i = 1; i <= q; i++) {
    cout << ans[i] << '\n';
  }
  return 0;
}

// Segment Tree 