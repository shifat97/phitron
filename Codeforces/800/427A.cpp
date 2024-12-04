#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int crime = 0;
    int officer = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            if (officer > 0) {
                officer--;
            } else {
                crime++;
            }
        } else {
            officer += a[i];
        }
    }

    cout << crime << endl;
    return 0;
}