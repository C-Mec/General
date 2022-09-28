#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    if (k < (float)sqrt(n)) {
        cout << "Impossible" << endl;
        return 0;
    } else {
        int m = n / k;
        int t = 0;
        for (int i = 0; i < k; i++) {
            if (n % k != 0 && i >= n % k) {
                for (int j = m + t + 1; j > t; j--) {
                    cout << j + i * m << " ";
                }
                t++;
            } else {
                for (int j = m; j > 0; j--) {
                    cout << j + i * m << " ";
                }
            }
        }
    }
}
