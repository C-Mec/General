#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[2 * n];
    long long ans = 0;
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }
    int max, maxid;
    for (int i = 0; i < n; i++) {
        max = 0;
        for (int j = 0; j < 2 * n; j++) {
            if (a[j] > max) {
                maxid = j;
                max = a[j];
            }
        }
        ans += max;
        a[maxid] = 0;
        a[maxid / 2] = 0;
    }
    cout << ans << endl;
}