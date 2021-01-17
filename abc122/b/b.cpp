#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int cnt = 0;
  vector<int> ACGT;
  vector<char> charS;
  for (int i = 0; i < S.length(); i++) {
    charS.push_back(S[i]);
  }
  charS.push_back('B');


  for (int i = 0; i < charS.size(); i++) {
    if (charS[i] == 'A' || charS[i] == 'C' || charS[i] == 'G' || charS[i] == 'T') {
      cnt++;
    } else {
      ACGT.push_back(cnt);
      cnt = 0;
    }
  }
  cout << *max_element(ACGT.begin(), ACGT.end()) << endl;
}