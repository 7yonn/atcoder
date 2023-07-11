#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define rep(i, c) for (ll i = 0; i < (ll)c; i++)

#define pb push_back

#define yes() cout << "Yes\n"
#define no() cout << "No\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M, X;
  cin >> N >> M >> X;
  N += 1;
  int l = 0;
  int h = 0;
  rep(i, M) {
    int A;
    cin >> A;
    if (A < X)
      l++;
    else
      h++;
  }
  cout << min(l, h);
}
