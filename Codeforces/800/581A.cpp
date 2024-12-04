#include <bits/stdc++.h>
using namespace std;
int main() {
    int r, b;
    cin >> r >> b;
    int days = 0;
    for (int i = 0; i < min(r, b); i++) {
        days++;
    }
    cout << days << " ";
    int remain = abs(r - b);
    if (remain > 1) {
        cout << remain / 2 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}