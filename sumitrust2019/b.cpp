#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  double N;
  cin >> N;
  double X = ceil(N / 1.08);

  if (floor(X * 1.08) == N) {
    cout << X;
  } else {
    cout << ":(";
  }
}
