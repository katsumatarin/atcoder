#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  map<string, int> m;
  for(int i = 0; i < N; i++) {
    cin >> S;
    decltype(m)::iterator it = m.find(S);
    if(it == m.end()) {
      m.insert(make_pair(S, 1));
    } else {
      m[S]++;
    }
  }

  int cnt = 0;
  vector<string> vec;
  for(auto itr = m.begin(); itr != m.end(); itr++) {
    if(itr->second >= cnt) {
      if(itr->second > cnt) {
        vec.clear();
      }
      vec.push_back(itr->first);
      cnt = itr->second;
    }
  }

  sort(vec.begin(), vec.end());

  int size = vec.size();
  for(int i = 0; i < size; i++) {
    cout << vec[i] << endl;
  }


}