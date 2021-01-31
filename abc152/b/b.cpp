#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int acnt = stoi(a);
  int bcnt = stoi(b);
  string aans, bans;
  for (int i = 0; i < bcnt; i++) {
    aans.insert(i, a);
  }
  for (int i = 0; i < acnt; i++) {
    bans.insert(i, b);
  }
  if (aans < bans) {
    cout << aans << endl;
  } else {
    cout << bans << endl;
  }
}