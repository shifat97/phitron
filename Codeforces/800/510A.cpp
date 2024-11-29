#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    bool tail = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 != 0) {
                if (tail && j == m - 1) {
                    cout << '#';
                } else if (!tail && j == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            } else {
                cout << '#';
            }
        }
        cout << endl;

        if (i % 2 != 0) {
            tail = !tail;
        }
    }
    return 0;
}