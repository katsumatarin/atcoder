#include <bits/stdc++.h>
using namespace std;

const int INF = 0xfffffff;

int main() {
  int N;
  cin >> N;
  int A, B;
  vector<int> vec_a;
  vector<int> vec_b;
  for(int i = 0; i < N; i++) {
    cin >> A >> B;
    vec_a.push_back(A);
    vec_b.push_back(B);
  }

  // vector<int>::iterator a_iter = min_element(vec_a.begin(), vec_a.end());
  // size_t a_index = distance(vec_a.begin(), a_iter);

  // vector<int>::iterator b_iter = min_element(vec_b.begin(), vec_b.end());
  // size_t b_index = distance(vec_b.begin(), b_iter);

  // if(a_index != b_index) {
  //   if(*a_iter > *b_iter) {
  //     cout << *a_iter << endl;
  //     return 0;
  //   } else {
  //     cout << *b_iter << endl;
  //     return 0;
  //   }
  // } else {
  //   int ans = *a_iter + *b_iter;
  //   int a_min = *a_iter;
  //   int b_min = *b_iter;
  //   sort(vec_a.begin(), vec_a.end());
  //   if (ans > max(vec_a[1], b_min)) {
  //     ans = max(vec_a[1], b_min);
  //   }
  //   sort(vec_b.begin(), vec_b.end());
  //   if (ans > max(a_min, vec_b[1])) {
  //     ans = max(a_min, vec_b[1]);
  //   }
  //   cout << ans << endl;
  //   return 0;
  // }

  int vec_a_size = vec_a.size();
  int vec_b_size = vec_b.size();

  int ans = INF;

  for(int i = 0; i < vec_a_size; i++) {
    for(int j = 0; j < vec_b_size; j++) {
      if(i == j) {
        if(ans > vec_a[i] + vec_b[j]){
          ans = vec_a[i] + vec_b[j];
        }
      } else {
        if(ans > max(vec_a[i], vec_b[j])) {
          ans = max(vec_a[i], vec_b[j]);
        }
      }
    }
  }

  cout << ans << endl;
}