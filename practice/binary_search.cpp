#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int BinarySearch(vector<int> vec, int key){
//   int left = 0, right = (int)vec.size(), mid;

//   while (left < right) {
//     mid = (left + right)/2;
//     if(vec[mid] == key) {
//       return mid;
//     } else if (key < vec[mid]) {
//       right = mid;
//     } eles if (vec[mid] < key) {
//       left = mid + 1;
//     }
//   }
//   return -1;
// }

// int main() {
//   vector<int> vec = {3, 1, 4, 6, 5};

//   sort(vec.begin(), vec.end());

//   for (int key = 0; key <= 10; key++) {
//     if(binary_search(vec.begin(), vec.end(), key)){
//       cout << key << ": " << "found" << endl;
//     } else {
//       cout << key << ": " << "not found" << endl;
//     }
//   }
//   return 0;
// }

// int main() {
//     vector<int> vec = {1, 1, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
//     vector<int>::iterator position;  // auto position; で良い．
//     int idx_lower;

//     position = lower_bound(vec.begin(), vec.end(), 3);  // 3 を二分探索
//     idx_lower = distance(vec.begin(), position);
//     cout << "vec[" << idx_lower << "] = " << *position << "\n";

//     // cout << "vec[" << idx_lower << "] = " << vec[idx_lower] << "\n"; でも良い

//     position = lower_bound(vec.begin(), vec.end(), 2);  // 3 を二分探索
//     idx_lower = distance(vec.begin(), position);
//     cout << "vec[" << idx_lower << "] = " << *position << "\n";

//     return 0;
// }

// int main() {
//     vector<int> vec = {1, 1, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
//     vector<int>::iterator iter_lower, iter_upper;
//     long idx_lower, idx_upper;
//     for (int key = 0; key <= 16; ++key) {
//         // lower_bound
//         iter_lower = lower_bound(vec.begin(), vec.end(), key);
//         idx_lower = distance(vec.begin(), iter_lower);

//         // upper_bound
//         iter_upper = upper_bound(vec.begin(), vec.end(), key);
//         idx_upper = distance(vec.begin(), iter_upper);

//         // output
//         cout << "----- key = " << key << " -----" << "\n";
//         cout << "lower_bound: vec[" << idx_lower << "] = " << *iter_lower << "\n";
//         cout << "upper_bound: vec[" << idx_upper << "] = " << *iter_upper << "\n";
//         cout << "\n";
//     }
//     return 0;
// }

// int main() {
//     vector<int> vec = {1, 1, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
//     int key = 5;
//     auto iter = lower_bound(vec.begin(), vec.end(), key);

//     if(iter != vec.end() && *iter == key) {
//         cout << key << "is found at " << distance(vec.begin(), iter) << endl;
//     } else {
//         cout << key << "is NOT found." << endl;
//     }

//     return 0;
// }

int main() {
    vector<int> vec = {1, 1, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
    size_t len = vec.size();
    int key = 6;

    // 二分探索
    auto iter_lower = lower_bound(vec.begin(), vec.end(), key);
    auto iter_upper = upper_bound(vec.begin(), vec.end(), key);

    // インデックスを取得
    long idx_lower = distance(vec.begin(), iter_lower);
    long idx_upper = distance(vec.begin(), iter_upper);

    // lower_bound で要素数を数える
    cout << "6 未満の要素数は " << idx_lower << endl;
    cout << "6 以上の要素数は " << len - idx_lower << endl;

    // lower_bound で要素数を数える
    cout << "6 以下の要素数は" << idx_upper << endl;
    cout << "6 より大きい数の要素数は" << len - idx_upper << endl;

    return 0;
}