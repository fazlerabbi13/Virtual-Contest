#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Sort the skill levels
    // sort(a.begin(), a.end());

    // Step 2: Two pointers / sliding window
    // int l = 0, best = 0;
    // for (int r = 0; r < n; r++) {
    //     while (a[r] - a[l] > 5) {
           
    //         l++;  
    //     }
    //     best = max(best, r - l + 1);
    // }

    // cout << best << "\n";

    return 0;
}
 // shrink window from the left