// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int INF = 1e9 + 7;
// #define int long long
// const int N = 1000;
// int val[N][N];
// bool vis[N][N];
// int dis[N][N];
// int n, m;

// vector<pair<int, int>> movements = {
// 	{0, 1}, {0, -1}, {1, 0}, {-1, 0},
// 	{1, 1}, {1, -1,}, {-1, 1}, {-1, -1}
// };

// bool isvalid(int x, int y) {
// 	return x >= 0 and y >= 0 and x < n and y < m;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t; cin >> t;
//   while(t--) {
//   	cin >> n >> m;
//   	for(int i = 0; i < n; i++) {
//   	  for(int j = 0; j < m; j++) {
//   	  	cin >> val[i][j];
//   	  } 
//   	}
//   	int mx = 0;
//     for(int i = 0; i < n; i++) {
//   	  for(int j = 0; j < m; j++) {
//   	  	if(val[i][j] > mx) {
//   	  	  mx = val[i][j];
//   	  	}
//   	  }
//   	}
//   	int ans = 0;
//   	queue<pair<int, int>> q;
//   	for(int i = 0; i < n; i++) {
//   	  for(int j = 0; j < m; j++) {
//   	  	if(val[i][j] == mx) {
//   	  	  q.push({i, j});
//   	  	  dis[i][j] = 0;
//   	  	  vis[i][j] = true;
//   	  	}
//   	  }
//   	}
//     while(!q.empty()) {
//      pair<int, int> cur_v = q.front();
//      q.pop();
//      int x = cur_v.first, y = cur_v.second;
//      for(auto movement : movements) {
//   			int childx = movement.first + x;
//   			int childy = movement.second + y;
//   			if(!isvalid(childx, childy)) continue;
//   			if(!vis[childx][childy]) {
//   				q.push({childx, childy});
//   				dis[childx][childy] = dis[x][y] + 1;
//   				vis[childx][childy] = true;
//   				ans = max(ans, dis[childx][childy]);
//   			}
//   		}
//      }
//      cout << ans << "\n";
//      for(int i = 0; i < n; i++) {
//      	for(int j = 0; j < m; j++) {
//      	  vis[i][j] = false;
//      	  dis[i][j] = 0;
//      	}
//      }
//   }
//   return 0;
// }

// // https://vjudge.net/problem/CodeChef-SNSOCIAL



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 7;
#define int long long
const int N = 1000;
char val[N][N];
bool vis[N][N];
int dis[N][N];
int n, m;

vector<pair<int, int>> movements = {
  {0, 1}, {0, -1}, {1, 0}, {-1, 0},
  {1, 1}, {1, -1,}, {-1, 1}, {-1, -1}
};

bool isvalid(int x, int y) {
  return x >= 0 and y >= 0 and x < n and y < m;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; 
  while(cin >> n >> m and m) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> val[i][j];
      }
    }
  }
    int ans = 0;
    queue<pair<int, int>> q;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(val[i][j] == mx) {
          q.push({i, j});
          dis[i][j] = 0;
          vis[i][j] = true;
        }
      }
    }
    while(!q.empty()) {
     pair<int, int> cur_v = q.front();
     q.pop();
     int x = cur_v.first, y = cur_v.second;
     for(auto movement : movements) {
        int childx = movement.first + x;
        int childy = movement.second + y;
        if(!isvalid(childx, childy)) continue;
        if(!vis[childx][childy]) {
          q.push({childx, childy});
          dis[childx][childy] = dis[x][y] + 1;
          vis[childx][childy] = true;
          ans = max(ans, dis[childx][childy]);
        }
      }
     }
     cout << ans << "\n";
     for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        vis[i][j] = false;
        dis[i][j] = 0;
      }
     }
  }
  return 0;
}

// https://vjudge.net/problem/CodeChef-SNSOCIAL