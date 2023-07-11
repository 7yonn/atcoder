#include <bits/stdc++.h>
#include <climits>
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

  ll int N, K;
  cin >> N >> K;
  cout << min(abs(N % K), abs((N % K) - K));
}
