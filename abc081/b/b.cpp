#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int cnt = 0;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N; i++)
  {
    cin >> vec.at(i);
  }
  while (true)
  {
    for (int i = 0; i < N; i++)
    {
      if (vec[i] % 2 != 0)
      {
        cout << cnt << endl;
        return 0;
      }
    }
    for (int i = 0; i < N; i++)
    {
      vec[i] = vec[i] / 2;
    }
    cnt++;
  }
}