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
  sort(vec.begin(), vec.end(), greater<int>{});
  int Alice = 0;
  int Bob = 0;
  for (int i = 0; i < N; i++)
  {
    if (i%2==0)
    {
      Alice += vec.at(i);
    } else
    {
      Bob += vec.at(i);
    }
  }
  cout << Alice-Bob << endl;
  return 0;
}