#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int m = n * 1.08;
    if(206>m) cout << "Yay!" << endl;
    else if(206==m) cout << "so-so" << endl;
    else cout << ":(" << endl;
    return 0;
}