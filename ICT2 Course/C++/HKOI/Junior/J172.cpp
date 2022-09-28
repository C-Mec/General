#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    if (k <= (float)n / 2) {
        cout << "Impossible" << endl;
        return 0;
    } else {
        for (int i = 1; i < k; i++) {
            cout << i << " ";
        }
        cout << n << " ";
        for (int i = n - 1; i > k; i--) {
            cout << i << " ";
        }
        if (n != k)
            cout << k << endl;
    }
}
