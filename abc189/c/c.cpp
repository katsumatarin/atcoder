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
  for (int i = 0; i < N; i++) {
    vector<int> vecCopy;
    cin >> vecCopy.at(vec[i]);
    int min = *min_element(vecCopy.begin(), vecCopy.end());
    cout << vecCopy[i] << endl;
  }
}