#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        int b[a];
        int ans = 0;
        for (int j = 0; j < a; j++) {
            cin >> b[j];
            if (b[j] % 2 == 1) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}