#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min_score = a[0];
    int max_score = a[0];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max_score) {
            max_score = a[i];
            count++;
        }

        if (a[i] < min_score) {
            min_score = a[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}