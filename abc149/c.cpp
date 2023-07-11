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

  int X;
  cin >> X;
  vector<int> primes;
  int curr = 2;
  int p = 0;
  while (true) {
    cout << curr << '\n';
    for (int i : primes) {
      if (curr % i == 0)
        goto end;
    }
    primes.pb(curr);
    if (curr >= X) {
      cout << curr;
      return 0;
    }

  end:
    curr = (2 * p++) + 1;
  }
}
