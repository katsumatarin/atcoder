#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++)
  {
    cin >> vec.at(i);
  }
  set<int> s(vec.begin(), vec.end());
  vector<int> vec2(s.begin(), s.end());
  cout << vec2.size() << endl;;
}