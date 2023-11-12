//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll finddigits(int mid) {
   if(mid < 0) return 0;
   if(mid <= 1) return 1;
   double exp = 2.71828182845904523536;
   double pi = 3.141592654;
   double x = ((mid * log10(mid / exp) + log10(2 * pi * mid) / 2.0));
   return floor(x) + 1;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      int l = 1, r = 1e9, ans = 0;
      while(l <= r) {
         int mid = l + (r - l) / 2;
         if(finddigits(mid) <= n) {
            ans = mid;
            l = mid + 1;
         }
         else r = mid - 1;
      }
      cout << ans << "\n";
   }
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n; 
bool isvalid(int mid) {
   if(mid < 0) return 0;
   if(mid <= 1) return 1;
   double exp = 2.71828182845904523536;
   double pi = 3.141592654;
   double x = ((mid * log10(mid / exp) + log10(2 * pi * mid) / 2.0));
   return (floor(x) + 1) <= n;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      cin >> n;
      int l = 1, r = 1e9, ans = 0;
      while(l <= r) {
         int mid = l + (r - l) / 2;
         if(isvalid(mid)) {
            ans = mid;
            l = mid + 1;
         }
         else r = mid - 1;
      }
      cout << ans << "\n";
   }
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   double exp = 2.718281828459;
   double pi = 3.141592653589793;
   double x = (n * log10(n / exp) + log10(2 * pi * n) / 2.0);
   cout << floor(x) + 1;
   return 0;
}

//https://www.medcalc.org/manual/exp-function.php#:~:text=EXP(x)%20returns%20the%20natural,function%20of%20the%20LN%20function.
//https://www.geeksforgeeks.org/find-the-length-of-factorial-of-a-number-in-any-given-base/
//https://www.geeksforgeeks.org/count-digits-in-a-factorial-using-logarithm/
// O(1);
