#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int z, w;
    cin >> n >> z >> w;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Draw all or One left
    int max = abs(*max_element(a, a + n) - w);
    int min = abs(*min_element(a, a + n) - w);
    if (w > max) {
        cout << w - a[n - 1] << endl;
    } else if (w < min) {
        cout << a[n - 1] - w << endl;
    } else if (a[n - 1])
}