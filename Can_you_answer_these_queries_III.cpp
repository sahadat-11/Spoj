//In The Name of AllAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e4 + 7, inf = 1e9 + 7;
int a[N];
struct node {
    int max_pre_sum, max_suf_sum;
    int max_sub_arr_sum;
    int total_sum;
};
node t[4 * N];
node merge(node l, node r) {
    if(l.total_sum == inf) return r;
    if(r.total_sum == inf) return l;
    node ans;
    ans.max_sub_arr_sum = max(l.max_sub_arr_sum, r.max_sub_arr_sum);
    ans.max_sub_arr_sum = max(ans.max_sub_arr_sum, l.max_suf_sum + r.max_pre_sum);
    ans.max_pre_sum = max(l.max_pre_sum, l.total_sum + r.max_pre_sum);
    ans.max_suf_sum = max(r.max_suf_sum, r.total_sum + l.max_suf_sum);
    ans.total_sum = l.total_sum + r.total_sum;
    return ans;
}
void build(int n, int b, int e) {
    if(b == e) {
        t[n].max_sub_arr_sum = a[b];
        t[n].max_suf_sum = a[b];
        t[n].max_pre_sum = a[b];
        t[n].total_sum = a[b];
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}
void update(int n, int b, int e, int i, int x) {
    if(e < i or i < b) return;
    if(b == e) {
        t[n].max_sub_arr_sum = x;
        t[n].max_suf_sum = x;
        t[n].max_pre_sum = x;
        t[n].total_sum = x;
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[n] = merge(t[l], t[r]);
}
node query(int n, int b, int e, int i, int j) {
    if(e < i or j < b) return {inf, inf, inf, inf};
    if(b >= i and j >= e) {
        return t[n];
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    build(1, 1, n);
    int q; cin >> q;
    while(q--) {
    	int ch; cin >> ch;
        if(ch == 0) {
           int i, x; cin >> i >> x;
           update(1, 1, n, i, x);
        }
        else {
            int i, j; cin >> i >> j;
            node ans = query(1, 1, n, i, j);
            cout << ans.max_sub_arr_sum << "\n";
        }
    }
    return 0;  
}
