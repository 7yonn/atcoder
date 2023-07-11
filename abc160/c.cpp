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

  int K, N;
  cin >> K >> N;
  int A[N];
  rep(i, N) cin >> A[i];

  int maxd = K - A[N - 1] + A[0];

  for (int i = 1; i < N; i++) {
    maxd = max(maxd, A[i] - A[i - 1]);
  }

  cout << K - maxd;
}
