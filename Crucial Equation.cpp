//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t, cs = 0; cin >> t;
   while(t--) {
   	 cout << "Case " << ++cs << ": ";
   	 int a, b, c; cin >> a >> b >> c;
   	 int g = __gcd(a, b);
   	 if(c % g == 0) cout << "Yes\n";
   	 else cout << "No\n";
   }
   return 0;
}
// connstrant: a, b, c >= 1

// bonus if( a, b, c >= 0)

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter values for a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0 && b == 0) {
        if (c == 0) {
            cout << "Infinite solutions exist." << endl;
        } else {
            cout << "No solution exists." << endl;
        }
    } else if (c % __gcd(a, b) == 0) {
        cout << "Solution exists." << endl;
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}
