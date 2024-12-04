#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int count = 0;
    int total_minutes = 20 * 60;
    int solve = 0;
    for (int i = 1; i <= n; i++) {
        solve = solve + (i * 5);
        if ((m + solve + total_minutes) > 1440) {
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}