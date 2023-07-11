#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll int A, B;
  cin >> A >> B;
  cout << (A / B) + (bool)(A % B);
}
