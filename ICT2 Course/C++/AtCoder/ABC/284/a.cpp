#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string temp;
    for (int i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}