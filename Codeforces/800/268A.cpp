#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, count = 0;
    cin >> n;

    vector<pair<int, int>> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i].first >> c[i].second;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (c[i].first == c[j].second) {
                    ++count;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}