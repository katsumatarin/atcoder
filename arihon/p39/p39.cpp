#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 100000;
bool used[MAX_N];
int perm[MAX_N];

// {0, 1, 2, 3, 4, ... n-1}の並び替えn!通りを生成する

void permutation1(int pos, int n) {
    if(pos == n) {
        /*
        permに対する操作
        */
       return;
    }

    // permのpos番目を0~n-1のどれにするかのループ
    for(int i = 0; i < n; i++) {
        if(!used[i]) {
            perm[pos] = i;
            // iを使ったのでフラグをtrueにしておく
            used[i] = true;
            permutation1(pos + 1, n);
            // 戻ってきたらフラグを戻しておく
            used[i] = false;
        }
    }
    return;
}

    // next_permutationは辞書順で次の順列を生成する
    int perm2[MAX_N];

    void permutation2(int n) {
        for(int i = 0; i < n; i++) {
            perm2[i] = i;
        }
        do {
            /*
            perm2に対する操作
            */
        } while (next_permutation(perm2, perm2 + n));
        // すべての順列を生成死終わったらnext_permutationはfalseを返す
        return;
    }
