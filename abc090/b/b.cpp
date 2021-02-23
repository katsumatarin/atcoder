#include <bits/stdc++.h>
using namespace std;

bool CheckKaibunsu(int checkedKaibunsuNum) {
  string checkedKaibunsuNumtoStr;
  checkedKaibunsuNumtoStr = to_string(checkedKaibunsuNum);
  int sLen = checkedKaibunsuNumtoStr.length();
  for(int i = 0; i < sLen / 2; i++) {
    if (checkedKaibunsuNumtoStr[i] != checkedKaibunsuNumtoStr[sLen - i - 1]) {
      return false;
    }
  }
  return true;
}

int main() {
  int A, B;
  cin >> A >> B;
  int kaibunsuCnt = 0;
  for (int i = A; i <= B; i++) {
    bool checkKaibunsu = CheckKaibunsu(i);
    if (checkKaibunsu == true) {
      kaibunsuCnt++;
    }
  }
  cout << kaibunsuCnt << endl;
}
