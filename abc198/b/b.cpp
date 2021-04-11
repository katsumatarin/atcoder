#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string str){
  int str_len = str.length();
  for(int i = 0; i < str_len / 2; i++){
    if(str[i] != str[str_len - 1 - i]){
      return false;
    }
  }
  return true;
}


int main(){
  string N;
  cin >> N;

  bool palindrome = CheckPalindrome(N);

  if(palindrome == true){
    cout << "Yes" << endl;
    return 0;
  }

  for(int i = 0; i < 10; i++) {
    N = '0' + N;
    palindrome = CheckPalindrome(N);
    if(palindrome == true){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;


}