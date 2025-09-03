#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string a;
    cin >> n >> a;
    int l;
    for (int i = 1; i < n; i++) {
        l = 0;
        for (int j = 0; j < n - i; j++) {
            if (a[j] == a[j + i]) {
                break;
            }
            l++;
        }
        cout << l << endl;
    }
}