#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int T;
  int ans_sample = 0;
  vector<int> vec_question;
  for(int i = 0; i < N; i++){
    cin >> T;
    vec_question.push_back(T);
    ans_sample += T;
  }

  int M;
  cin >> M;
  int P, X;
  vector<int> vec_ans;
  for(int i = 0; i < M; i++){
    int ans = ans_sample;
    cin >> P >> X;
    if(vec_question[P - 1] > X){
      ans -= (vec_question[P - 1] - X);
    } else {
      ans += (X - vec_question[P - 1]);
    }
    vec_ans.push_back(ans);
  }

  for(int i = 0; i < M; i++){
    cout << vec_ans[i] << endl;
  }
}