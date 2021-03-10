#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  int a_distance = 0, b_distance = 0;
  if (x > a) {
    a_distance = x - a;
  } else {
    a_distance = a - x;
  }
  if (x > b) {
    b_distance = x - b;
  } else {
    b_distance = b - x;
  }

  if(a_distance < b_distance) {
    cout << "A" << endl;
  } else {
    cout << "B" << endl;
  }

}