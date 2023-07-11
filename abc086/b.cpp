#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long
#define loop(i, a, b) for (int i = (int)a; i < (int)b; i++)
#define rep(i, c) for (ll i = 0; i < (ll)c; i++)

#define pb push_back

void yes() { cout << "Yes\n"; }
void no() { cout << "No\n"; }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> a >> b;

  int nth = 1;
  int c = b;
  while ((c = c / 10)) {
    nth++;
  }
  float res = a * pow(10, nth) + b;

  if (fmod(sqrt(res), 1)) {
    no();
  } else {
    yes();
  }
}
