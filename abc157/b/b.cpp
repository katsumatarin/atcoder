#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> data(3, vector<int>(3));

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> data.at(i).at(j);
    }
  }

  int N;
  cin >> N;

  int b;
  for(int k = 0; k < N; k++) {
    cin >> b;
    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
        if(data.at(i).at(j) == b) {
          data.at(i).at(j) = 0;
        }
      }
    }
  }

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cerr << data.at(i).at(j) << " ";
    }
    cerr << endl;
  }


  if(data.at(1).at(1) == 0) {
    if(data.at(0).at(0) == 0 && data.at(2).at(2) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    if(data.at(0).at(2) == 0 && data.at(2).at(0) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    if(data.at(0).at(1) == 0 && data.at(2).at(1) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    if(data.at(1).at(0) == 0 && data.at(1).at(2) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  if(data.at(0).at(0) == 0) {
    if(data.at(0).at(1) == 0 && data.at(0).at(2) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    if(data.at(1).at(0) == 0 && data.at(2).at(0) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  if(data.at(2).at(2) == 0) {
    if(data.at(0).at(2) == 0 && data.at(1).at(2) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    if(data.at(2).at(0) == 0 && data.at(2).at(1) == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}