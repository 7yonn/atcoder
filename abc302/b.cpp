#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int dx, dy = 0;
int H, W;
pair<int, int> directions[] = {{0, 1},  {0, -1}, {-1, 0},  {1, 0},
                               {-1, 1}, {1, 1},  {-1, -1}, {1, -1}};
string steps = "snuke";
bool check(vector<string> &S, int x, int y, int step) {
  x = x + dx;
  y = y + dy;
  if (x < 0 || x >= W || y < 0 || y >= H)
    return false;
  if (S[y][x] == steps[step]) {
    if (step >= 4)
      return true;
    step++;
    return check(S, x, y, step);
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> H >> W;
  vector<string> S(H);
  // S[y][x]
  rep(i, H) cin >> S[i];

  rep(y, H) rep(x, W) {
    if (S[y][x] == 's') {
      for (pair<int, int> d : directions) {
        dx = d.first;
        dy = d.second;
        if (check(S, x, y, 1)) {
          cout << ++y << " " << ++x << '\n';
          rep(i, 4) {
            x += dx;
            y += dy;
            cout << y << " " << x << '\n';
          }
          goto end;
        }
      }
    }
  }
end:
  return 0;
}
