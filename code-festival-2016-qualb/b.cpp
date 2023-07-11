#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ll long long
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;

  int pmax = A + B;

  int pcount = 0;
  int ocount = 0;
  for (char p : S) {
    if (pcount < pmax and p != 'c') {
      if (p == 'b') {
        if (ocount < B)
          ocount++;
        else {
          cout << "No" << '\n';
          continue;
        }
      }
      cout << "Yes" << '\n';
      pcount++;
      continue;
    }
    cout << "No" << '\n';
  }
}
