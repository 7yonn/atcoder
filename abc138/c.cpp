#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long
#define loop(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define rep(i, c) for (ll i = 0; i < (ll)c; i++)

#define pb push_back

#define yes() cout << "Yes\n"
#define no() cout << "No\n"

// Too complicated / Not efficient lmao
// float solve(vector<float> v) {
//   float n = v.size();
//   if (v.size() == 1)
//     return v[0];
//   float mx = FLT_MIN;
//   rep(i, n - 1) loop(j, i + 1, n) {
//     vector<float> nv = v;
//     nv.pb((nv[i] + nv[j]) / 2);
//     nv.erase(nv.begin() + j);
//     nv.erase(nv.begin() + i);
//     mx = max(mx, solve(nv));
//   }
//   return mx;
// }
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  float N;
  cin >> N;
  vector<float> v(N);
  rep(i, N) cin >> v[i];
  while (v.size() != 1) {
    sort(v.rbegin(), v.rend());
    float x = v[v.size() - 1];
    v.pop_back();
    float y = v[v.size() - 1];
    v.pop_back();
    v.pb((x + y) / 2);
  }
  cout << v[0];
}
