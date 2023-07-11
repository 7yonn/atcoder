#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, c) for (int i = 0; i < (int)c; i++)

vector<vector<int>> adj;

bool dfs(int s, vector<bool> visited) {
  visited[s] = true;
  bool all_visited = true;
  for (bool v : visited) {
    if (!v)
      all_visited = false;
  }
  if (all_visited)
    return true;
  for (int c : adj[s]) {
    if (!visited[c])
      if (dfs(c, visited))
        return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M;
  cin >> N >> M;
  string Ss[N];
  adj.resize(N);
  rep(i, N) cin >> Ss[i];
  rep(i, N) adj[i] = {};

  rep(i, N) {
    rep(j, N) {
      int diff = 0;
      rep(c, M) {
        if (Ss[i][c] != Ss[j][c])
          diff++;
      }
      if (diff == 1) {
        adj[i].push_back(j);
      }
    }
  }

  rep(i, N) {
    vector<bool> visited(N);
    if (dfs(i, visited)) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}
