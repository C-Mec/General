#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main() {
    int n = 4;
    int a[] = {3, 5, 4, 1};
    int SparseTable[100001][51];
    for (int i = 0; i < n; i++) {
        SparseTable[i][0] = a[i];
    }
    for (int j = 1; j <= 19; j++) {
        for (int i = 0; i <= n - (1 << j); i++) {
            SparseTable[i][j] = __gcd(SparseTable[i][j - 1],
                                      SparseTable[i + (1 << (j - 1))][j - 1]);
        }
    }
    int endPointer, startPointer, prevEndPointer, tempGCD;
    int tempAns = 0;
    for (int i = 0; i < n; i++) {
        endPointer = i;
        startPointer = i;
        prevEndPointer = i;
        tempGCD = a[i];
        while (endPointer < n) {
            int r = n - 1;
            int l = prevEndPointer;
            int mid = prevEndPointer;
            int nextPos = prevEndPointer;

            while (r >= l) {
                mid = ((r + l) >> 1);
                int j = int(log2(i - mid + 1));
                if (__gcd(SparseTable[i][j], SparseTable[mid - (1 << j) + 1][j]) == tempGCD) {
                    nextPos = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            tempAns += ((nextPos + 1 - prevEndPointer) * tempGCD);
            prevEndPointer = nextPos + 1;
            if (endPointer < n) {
                tempGCD = __gcd(tempGCD, a[nextPos + 1]);
            }
        }
    }
    cout << tempAns << endl;
}
