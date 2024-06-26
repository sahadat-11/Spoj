//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 8;
bitset<N>f; // initially false;
void sieve() {
   f[0]=f[1]=true; 
   for(int i = 4; i < N; i += 2) f[i] = true;
   for(int i = 3; i * i < N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j < N; j += 2 * i) f[j] = true;
    }
  }
}
bool has_digit_zero(int n) {
   while(n) {
      if(n % 10 == 0) return true;
      n /= 10;
   }
   return false;
}
bool isvalid(int n) {
   if(f[n]) return false;
   if(has_digit_zero(n)) return false;
   string che = to_string(n);
   int len = che.size();
   for(int i = 0; i < len; i++) {
      string suffix = che.substr(i);
      int x = stoi(suffix);
      if(f[x]) return false;
   }
   return true;
}
bool valid[N];
int suffixvalid[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   for(int i = 2; i < N; i++) {
      valid[i] = isvalid(i);
   }
   for(int i = 1; i < N; i++) {
      suffixvalid[i] = suffixvalid[i - 1] + valid[i];
   }
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      cout << suffixvalid[n] << endl;
   }
  return 0;
 }
 

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7;
bitset<N> f;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true;
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
         for(int j = i * i; j <= N; j += 2*i) f[j] = true;
      }
   }
   vector<int> prime;
   for(int i = 2; i <= N; i++) {
      if(!f[i]) prime.push_back(i);
   }
   int t; cin >> t;
   while(t--) {
          int n; cin >> n;
          long long cnt = 0;
          for(auto i : prime) {
          if(i > n) break;
          bool flag = true;;
          string x = to_string(i);
          //cout << x << endl;
          int zero = count(x.begin(), x.end(), '0');
          if(f[i] or zero) flag = false;
          if(flag) {
            for(int j = 0; j < x.size(); j++) {
               string temp = x.substr(j);
               //cout << temp << endl;
               int tmp = stoi(temp);
               if(f[tmp]) flag = false;
            }
          }
          if(flag) cnt++;
       }
      cout << cnt << "\n";    
   }
   return 0; 
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7,  mod = 1e9 + 7;
#define int long long
bitset<N> f;
int pre_cal[N];
bool has_zero(int n) {
   while(n) {
     if(n % 10 == 0) return true;
     n /= 10;
   }
   return false;
}
bool is_prime(int n) {
   string s = to_string(n);
   int sz = s.size();
   for(int i = 0; i < sz; i++) {
     string x = s.substr(i, sz);
     int xx = stoi(x);
     //cout << x << " " << xx << endl;
     if(f[xx]) return false;
   }
   return true;
}
bool isvalid(int n) {
   if(f[n]) return false;
   if(has_zero(n)) return false;
   if(!is_prime(n)) return false;
   return true;
}
void solve() {
   int n; cin >> n;
   cout << pre_cal[n] << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[0] = f[1] = true; 
  for(int i = 4; i <= N; i += 2) f[i] = true;
  for(int i = 3; i * i <= N; i += 2) {
    if(!f[i]) {
    for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
   } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  for(int i = 2; i < N; i++) {
   pre_cal[i] = pre_cal[i - 1] + isvalid(i);
  }
  //for(int i = 1; i <= 10; i++) cout << pre_cal[i] << "\n";
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
