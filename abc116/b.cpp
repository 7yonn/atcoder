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

  int s;
  cin >> s;
  vector<int> a;
  a.pb(s);
  int c = 1;
  while (true) {
    c++;
    if (s & 1) {
      s = s + s + s + 1;
    } else {
      s = s / 2;
    }
    // learned
    // this is equivalent to
    // if(a.count(s))
    for (int i : a) {
      if (i == s) {
        goto end;
      }
    }
    a.pb(s);
  }
end:

  cout << c;
}
