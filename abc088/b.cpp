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
  int a[N];
  rep(i, N) cin >> a[i];

  sort(a, a + N, greater<int>());

  int score = 0;

  rep(i, N) score += (i & 1 ? -a[i] : a[i]);

  cout << score;
}
