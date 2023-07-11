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

  string S;
  cin >> S;
  int mc = 0;
  int count = 0;
  for (auto c : S) {
    if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
      count++;
      mc = max(mc, count);
    } else {
      count = 0;
    }
  }
  cout << mc;
}
