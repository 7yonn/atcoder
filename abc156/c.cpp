#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int xs[n];
  int xmin = 0;
  int xmax = 0;
  for (int i = 0; i < n; i++) {
    cin >> xs[i];
    xmin = min(xmin, xs[i]);
    xmax = max(xmax, xs[i]);
  }
  int smin = INT_MAX;
  for (int i = xmin; i <= xmax; i++) {
    int sum = 0;
    for (int x : xs) {
      sum += (x - i) * (x - i);
    }
    smin = min(smin, sum);
  }

  cout << smin;
}
