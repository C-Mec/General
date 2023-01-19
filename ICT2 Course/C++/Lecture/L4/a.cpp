#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    int o = 0, e = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i];
        if (a[i] % 2 == 0)
            e++;
        else
            o++;
    }
    if (o % 2 == 0) {
        cout << e << endl;
    } else {
        cout << o << endl;
    }
}