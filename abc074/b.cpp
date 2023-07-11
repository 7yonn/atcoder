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

  int N, K;
  cin >> N >> K;

  int sum = 0;

  rep(i, N) {
    int x;
    cin >> x;
    int a = x - 0;
    int b = K - x;
    if (a < b)
      sum += a * 2;
    else
      sum += b * 2;
  }
  cout << sum;
}
