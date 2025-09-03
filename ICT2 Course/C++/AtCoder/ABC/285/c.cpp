#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    long long ans = 0;
    long long temp = 0;
    for (int i = 0; i <= a.size() - 1; i++) {
        temp = a[i] - 'A' + 1;
        for (int j = 0; j < a.size() - 1 - i; j++) {
            temp *= 26;
        }
        ans += temp;
    }
    cout << ans << endl;
}