#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, b;
    int bu = 0, g = 0, u = 0;
    int max = 0, min = 0, m = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a != 4) {
            cin >> b;
            if (a == 1) {
                bu += b;
            } else if (a == 2) {
                g += b;
            } else if (a == 3) {
                u += b;
                if (g - u > 0) {
                    max += bu;
                    g -= u;
                } else {
                    max += bu + g - u;
                    g = 0;
                }
                min += bu - u;
                if (min < 0) {
                    min = 0;
                }
                bu = 0;
                u = 0;
            }
        } else {
            if (g - u > 0) {
                max += bu;
                g -= u;
            } else {
                max += bu + g - u;
                g = 0;
            }
            min += bu - u;
            if (min < 0) {
                min = 0;
            }
            bu = 0;
            u = 0;
            cout << max << " " << min << endl;
        }
    }
}
