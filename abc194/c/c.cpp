#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  int64_t A;
  vector<int64_t> vec;
  for(int64_t i = 0; i < N; i++) {
    cin >> A;
    vec.push_back(A);
  }

  int64_t sum = 0;
  for(int64_t i = 0; i < vec.size(); i++) {
    for(int64_t j = i; j < vec.size() - 1; j++) {
      sum += (vec[i] - vec[j + 1]) * (vec[i] - vec[j + 1]);
    }
  }
  cout << sum << endl;
}