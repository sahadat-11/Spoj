//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
bool vis[8][8];
int lev[8][8];

vector<pair<int, int>> movements = {
	{+2, -1}, {+2, +1}, {-2, -1}, {-2, +1},
	{+1, +2}, {-1, +2}, {-1, -2}, {+1, -2}
};

bool isvalid(int x, int y) {
	return (x >= 0 and y >= 0) and (x < 8 and y < 8);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	string st, en; cin >> st >> en;
  	int x1 = st[0] - 'a';
  	int y1 = st[1] - '1';
  	int x2 = en[0] - 'a';
  	int y2 = en[1] - '1';

  	queue<pair<int, int>> q;
  	q.push({x1, y1});
  	vis[x1][y1] = true;
  	lev[x1][y1] = 0;

  	while(!q.empty()) {
  		pair<int, int> v = q.front();
  		int x = v.first, y = v.second;
  		q.pop();
  		for(auto movement : movements) {
  			int childx = movement.first + x;
  			int childy = movement.second + y;
  			if(!isvalid(childx, childy)) continue;
  			if(!vis[childx][childy]) {
  				q.push({childx, childy});
  				lev[childx][childy] = lev[x][y] + 1;
  				vis[childx][childy] = true;
  			}
  		}
  	}
  	cout << lev[x2][y2] << "\n";
  	for(int i = 0; i < 8; i++) {
  		for(int j = 0; j < 8; j++) {
  			lev[i][j] = 0;
  			vis[i][j] = 0;
  		}
  	}
  }
  return 0;
}