#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  int sum = 0;
  string c;
  for (int i = 0; i < N.length(); i++) {
    c = N[i];
    sum += atoi(c.c_str());
  }
  if (sum % 9 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}