// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6;
// int d[N + 9];
// bool ok[N];
// int main() {
// 	ios_base::sync_with_stdio(0);
//     cin.tie(0);
// 	for(int i = 1; i <= N; i++) {
// 		for(int j = i; j <= N; j += i) d[j]++; // nlogn
// 	}
//     //for(int i = 1; i <= 10; i++) cout << d[i] << " ";
//     for(int n = 1; n <= N; n++) ok[n] = true;
//     for(int m = 1; m <= N; m++) {
//     	for(int n = m; n <= N; n += m) {
//     		if(d[n] % d[m] != 0) ok[n] = false;
//     	}
//     }
//     vector<int> ans;
//     for(int n = 1; n <= N; n++) {
//     	if(ok[n] and d[n] > 3) ans.push_back(n);
//     }
//     for(int i = 107 ; i < ans.size(); i += 108) cout << ans[i] << "\n";
// 	return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
int d[N + 9];
bool ok[N];
vector<int> divs[N + 9];
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	for(int i = 1; i <= N; i++) {
		for(int j = i; j <= N; j += i) {
			d[j]++;
			divs[j].push_back(i); // tle for this;
		} // nlogn
	}
	for(int n = 1; n <= N; n++) ok[n] = true;
    for(int n = 1; n <= N; n++) {
    	for(auto m : divs[n]) {
    		if(d[n] % d[m] != 0) ok[n] = false;
    	}
    }
    vector<int> ans;
    for(int n = 1; n <= N; n++) {
    	if(ok[n] and d[n] > 3) ans.push_back(n);
    }
    for(int i = 107 ; i < ans.size(); i += 108) cout << ans[i] << "\n";
	return 0;
}

