#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M, C;
  cin >> N >> M >> C;
  int B[M];
  rep(i, M) cin >> B[i];

  int count = 0;
  rep(i, N) {
    int sum = C;
    rep(j, M) {
      int A;
      cin >> A;
      sum += A * B[j];
    }
    if (sum > 0)
      count++;
  }
  cout << count;
}
