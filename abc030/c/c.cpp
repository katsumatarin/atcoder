#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, M;
    int X, Y;
    cin >> N >> M;
    cin >> X >> Y;

    vector<int> airportA(N);
    vector<int> airportB(M);
    for(int i = 0; i < N; i++) cin >> airportA[i];
    for(int i = 0; i < M; i++) cin >> airportB[i];

    int res = 0;
    int current = 0;
    bool turn = true;
    vector<int>::iterator it;
    it = lower_bound(airportB.begin(), airportB.end(), airportA[0] + X);
    while(it != airportB.end() && it != airportA.end()) {
        current = *it;
        if(turn) {
            it = lower_bound(airportA.begin(), airportA.end(), current + Y);
            res++;
        } else {
            it = lower_bound(airportB.begin(), airportB.end(), current + X);
        }
        turn = !turn;
    }

    cout << res << endl;
    return 0;
    }