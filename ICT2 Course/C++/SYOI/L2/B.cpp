#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        int b = 1;
        for (int j = 0; j < a.size(); j++) {
            if (a[j] == '2') {
                if (b < 2) {
                    b = 2;
                }
            } else if (a[j] == '3') {
                if (b < 3) {
                    b = 3;
                }
            } else if (a[j] == '4') {
                if (b < 4) {
                    b = 4;
                }
            } else if (a[j] == '5') {
                if (b < 5) {
                    b = 5;
                }
            } else if (a[j] == '6') {
                if (b < 6) {
                    b = 6;
                }
            } else if (a[j] == '7') {
                if (b < 7) {
                    b = 7;
                }
            } else if (a[j] == '8') {
                if (b < 8) {
                    b = 8;
                }
            } else if (a[j] == '9') {
                if (b < 9) {
                    b = 9;
                    break;
                }
            }
        }
        cout << b << endl;
    }
}