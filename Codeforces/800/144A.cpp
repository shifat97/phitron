#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sol[n];
    int max_pos = 0, min_pos = 0;
    for (int i = 0; i < n; i++) {
        cin >> sol[i];
        if (sol[i] > sol[max_pos]) {
            max_pos = i;
        }
        if (sol[i] <= sol[min_pos]) {
            min_pos = i;
        }
    }
    if (max_pos > min_pos) {
        min_pos++;
    }
    cout << max_pos + (n - 1) - min_pos << endl;
    return 0;
}