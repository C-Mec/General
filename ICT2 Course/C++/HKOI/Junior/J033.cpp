#include <bits/stdc++.h>
using namespace std;
bool isP(int n) {
    for (int i = 2; i <= (long long)sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; i++) {
        if (isP(n - i) && isP(i)) {
            cout << i << " " << n - i << endl;
            return 0;
        }
    }
    cout << "Impossible" << endl;
}
