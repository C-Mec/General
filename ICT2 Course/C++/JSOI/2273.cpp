#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, o;
    cin >> n >> m >> o;
    long long a[n];
    long long b;
    if (n == 1) {
        cout << "Yes" << endl
             << 0 << endl;
        return 0;
    }
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if ((m + o == 0 && abs(a[i] - a[i - 1]) != 0) || abs(a[i] - a[i - 1]) % (m + o) != 0) {
            cout << "No\n";
            return 0;
        }
    }
    b = *min_element(a, a + n);
    cout << "Yes" << endl;
    for (int i = 0; i < n - 1; i++) {
        if (m + o != 0)
            cout << (a[i] + m + o - 1 - b) / (m + o) << " ";
        else
            cout << 0 << " ";
    }
    if (m + o != 0)
        cout << (a[n - 1] + m + o - 1 - b) / (m + o) << endl;
    else
        cout << 0 << endl;
}