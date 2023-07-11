#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A[3][3];
  bool B[3][3] = {};
  rep(y, 3) rep(x, 3) cin >> A[y][x];
  int N;
  cin >> N;
  rep(i, N) {
    int b;
    cin >> b;
    rep(y, 3) rep(x, 3) {
      if (b == A[y][x]) {
        B[y][x] = true;
      }
    }
  }

  bool bingo = false;
  rep(y, 3) {
    if (B[y][0] && B[y][1] && B[y][2])
      bingo = true;
  }
  rep(x, 3) {
    if (B[0][x] && B[1][x] && B[2][x])
      bingo = true;
  }
  if (B[0][0] && B[1][1] && B[2][2])
    bingo = true;
  if (B[0][2] && B[1][1] && B[2][0])
    bingo = true;

  if (bingo)
    cout << "Yes";
  else
    cout << "No";
}
