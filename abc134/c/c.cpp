#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A;
  vector<int> vec;
  for(int i = 0; i < N; i++) {
    cin >> A;
    vec.push_back(A);
  }

  vector<int>::iterator iter = max_element(vec.begin(), vec.end());
  int max = *iter;
  size_t maxCount = count(vec.begin(), vec.end(), *iter);

  for(int i = 0; i < N; i++) {
    if (vec[i] == max) {
      if (maxCount == 1) {
        vec[i] = 0;
        vector<int>::iterator toiter = max_element(vec.begin(), vec.end());
        cout << *toiter << endl;
      } else {
        cout << max << endl;
      }
    } else {
      cout << max << endl;
    }
  }
}