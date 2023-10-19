//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int phi[N];
ll prephi[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) phi[i] = i;
   for(int i = 2; i < N; i++) {
   	 if(phi[i] == i) {
   	 	for(int j = i; j < N; j += i) {
   	 		phi[j] -= phi[j] / i;
   	 	}
   	 }
   }
  // for(int i = 1; i <= 10; i++) cout << phi[i] << "\n";
    prephi[1] = 1ll * 0;
    for(int i = 2; i <= N; i++) {
    	prephi[i] = 1ll * prephi[i - 1] + (i - phi[i]);
    }
    int t, cs = 0; cin >> t;
    while(t--) {
    	int n; cin >> n;
    	//cout << phi[n] << " " << prephi[n] << endl;
        cout << "Case " << ++ cs << ": ";
        cout << prephi[n] << "\n";
    } 
}