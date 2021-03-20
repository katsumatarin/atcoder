#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;

  int64_t ans = 0;

  string n_str = to_string(N);
  int64_t n_keta = n_str.length();

  if(n_keta % 2 == 1) {
    ans = pow(10.0, n_keta / 2) - 1;
  } else {
    int half = n_keta / 2;
    string first_str = n_str.substr(0, half);
    string second_str = n_str.substr(half);
    int first = stoi(first_str);
    int second = stoi(second_str);
    if(first <= second) {
      ans = first;
    } else {
      ans = first - 1;
    }
  }

  cout << ans << endl;

}