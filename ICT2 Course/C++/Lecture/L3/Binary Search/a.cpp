#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long l = -1, r = max(a, b) * sqrt(c) * 10, mid;
    while (l + 1 < r) {
        mid = (l + r) / 2;
        if ((mid / a) * (mid / b) >= c) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << r << endl;
}