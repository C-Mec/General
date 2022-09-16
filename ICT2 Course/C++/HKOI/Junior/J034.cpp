#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1, x2, y1, y2, x3, x4, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    float ans;
    if (x2 < x3 && y2 < y3) {
        ans = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    } else if (x1 >= x3 && x3 >= x2) {
        if (y2 < y3) {
            ans = abs(y3 - y2);
        } else if (y1 > y4) {
            ans = abs(y1 - y4);
        }
    } else if (y2 >= y3 && y3 >= y1) {
        if (x2 < x3) {
            ans = abs(x3 - x2);
        } else if (x1 < x4) {
            ans = abs(x1 - x4);
        }
    } else if (x4 < x1 && y2 < y3) {
        ans = sqrt((x1 - x4) * (x1 - x4) + (y3 - y2) * (y3 - y2));
    } else if (x2 < x3 && y4 < y1) {
        ans = sqrt((x3 - x2) * (x3 - x2) + (y1 - y4) * (y1 - y4));
    } else if (x4 < x1 && y4 < y1) {
        ans = sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
    }
    cout << fixed << setprecision(3) << ans << endl;
}
