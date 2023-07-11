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

  int N;
  cin >> N;

  int ans = 0;
  int mc = -1;
  for (int i = 1; i <= N; i++) {
    int n = i;
    int count = 0;
    while (n % 2 == 0 && n != 0) {
      n = n / 2;
      count++;
    }
    ans = (count >= mc ? i : ans);
    mc = max(count, mc);
  }
  cout << ans;
}
