//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, q; cin >> n >> q;
      string s; cin >> s;
      while(q--) {
         int l, r; cin >> l >> r;
         l--; r--; // o indexing
         int cnt[26] = {0};
         for(int i = l; i <= r; i++) {
            cnt[s[i] - 'a']++;
         }
         int odd_cnt = 0;
         for(int i = 0; i < 26; i++) {
            if(cnt[i] & 1) odd_cnt++;
         }
         if(odd_cnt > 1) cout << "NO\n";
         else cout << "YES\n";
      }
   }
   return 0;
}
// O(t * q * n); 10^11;

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int hsp[N][26];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, q; cin >> n >> q;
      string s; cin >> s;
      for(int i = 0; i < n; i++) {
         hsp[i + 1][s[i] - 'a']++; 
      }
      for(int i = 1; i <= n; i++) {
         for(int j = 0; j < 26; j++) {
            hsp[i][j] += hsp[i - 1][j];
         }
      }
      while(q--) {
         int l, r; cin >> l >> r;
         int odd_cnt = 0;
         for(int i = 0; i < 26; i++) {
            int char_cnt = hsp[r][i] - hsp[l - 1][i];
            if(char_cnt & 1) odd_cnt++;
         }
         if(odd_cnt > 1) cout << "NO\n";
         else cout << "YES\n";
      }
      
      // after test case clear the hash map;
      for(int i = 1; i <= n; i++) {
         for(int j = 0; j < 26; j++) {
            hsp[i][j] = 0;
         }
      }
   }
   return 0;
}
// O(t * q * 26);

