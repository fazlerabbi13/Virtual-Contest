#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    char c;

    // Input format: hh:mm
    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;

    // Convert to minutes since midnight
    int start = h1 * 60 + m1;
    int end   = h2 * 60 + m2;

    // Find midpoint
    int mid = start + (end - start) / 2;

    // Convert back to hours and minutes
    int h3 = mid / 60;
    int m3 = mid % 60;

    // Print in hh:mm format with leading zeros
    cout << setw(2) << setfill('0') << h3 << ":"
         << setw(2) << setfill('0') << m3 << endl;

    return 0;
}
