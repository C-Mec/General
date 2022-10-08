#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin >> n;
    int ans = 0;
    if (n[1] < 58) {  // is number(48-57) // 58 in ASCII is ':'
        ans += 9 * 36 + 8 * (n[0] - 55);
        ans += 7 * (n[1] - 48) + 6 * (n[2] - 48) + 5 * (n[3] - 48) + 4 * (n[4] - 48) + 3 * (n[5] - 48) + 2 * (n[6] - 48);
    } else {
        ans += 8 * (n[1] - 55) + 9 * (n[0] - 55);
        ans += 7 * (n[2] - 48) + 6 * (n[3] - 48) + 5 * (n[4] - 48) + 4 * (n[5] - 48) + 3 * (n[6] - 48) + 2 * (n[7] - 48);
    }
    if (11 - ans % 11 < 10)
        cout << n << "(" << 11 - ans % 11 << ")\n";
    else if (11 - ans % 11 == 10)
        cout << n << "(A)\n";
    else
        cout << n << "(0)\n";
}