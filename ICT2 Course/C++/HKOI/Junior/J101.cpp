#include <bits/stdc++.h>
using namespace std;

pair<int, int> VToC(int x) {
    if (x == 0) {
        return {0, 1};
    } else if (x == 1) {
        return {1, 0};
    } else if (x == 2) {
        return {1, 1};
    } else if (x == 3) {
        return {1, 2};
    } else if (x == 4) {
        return {2, 0};
    } else if (x == 5) {
        return {2, 1};
    } else if (x == 6) {
        return {2, 2};
    } else if (x == 7) {
        return {3, 0};
    } else if (x == 8) {
        return {3, 1};
    } else if (x == 9) {
        return {3, 2};
    } else {
        return {0, 2};
    }
}

int add(int x, int y) {
    pair<int, int> w, z;
    int ans = 0;
    w = VToC(x);
    z = VToC(y);
    ans += abs(w.first - z.first) + abs(w.second - z.second);
    return ans;
}

int main() {
    string n;
    cin >> n;
    int a[n.size()];
    long long ans = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '.') {
            a[i] = 10;
        } else {
            a[i] = n[i] - 48;
        }
    }
    ans += add(5, a[0]);
    for (int i = 1; i < n.size(); i++)
    {
        ans += add(a[i-1], a[i]);
    }
    if (a[n.size()-1] == 0 && VToC(a[n.size()-2]).second != 1)
        ans -= 1;
    cout << ans << endl;
    
}
