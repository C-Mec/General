#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1, x2, y1, y2, x3, x4, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    long double ans = 1e9;
    int ans1;
    if (x2 < x3 && y2 < y3) {
        ans = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    } else if (x4 < x1 && y2 < y3) {
        ans = sqrt((x1 - x4) * (x1 - x4) + (y3 - y2) * (y3 - y2));
    } else if (x2 < x3 && y4 < y1) {
        ans = sqrt((x3 - x2) * (x3 - x2) + (y1 - y4) * (y1 - y4));
    } else if (x4 < x1 && y4 < y1) {
        ans = sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
    } else {
        ans1 = abs(x2 - x3);
        if (ans1 < ans && ans1 != 0) ans = ans1;
        ans1 = abs(x1 - x4);
        if (ans1 < ans && ans1 != 0) ans = ans1;
        ans1 = abs(y1 - y4);
        if (ans1 < ans && ans1 != 0) ans = ans1;
        ans1 = abs(y2 - y3);
        if (ans1 < ans && ans1 != 0) ans = ans1;
    }

    cout << fixed << setprecision(3) << ans << endl;
}
