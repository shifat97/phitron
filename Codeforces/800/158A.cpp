#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int count = 0, zero = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            zero++;
        }
    }

    if (zero == n) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            continue;
        }
        else if (a[i] >= a[k - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}