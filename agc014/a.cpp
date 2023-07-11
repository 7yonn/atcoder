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

  int A, B, C;
  cin >> A >> B >> C;
  int count = 0;

  while (!(A % 2 || B % 2 || C % 2)) {
    set<int> old = {A, B, C};
    int nA = A / 2;
    int nB = B / 2;
    int nC = C / 2;
    A = nB + nC;
    B = nA + nC;
    C = nB + nA;
    set<int> not_old = {A, B, C};
    if (old == not_old) {
      count = -1;
      break;
    }
    count++;
  }
  cout << count;
}
