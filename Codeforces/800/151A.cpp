#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int m = min((k * l) / nl, (c * d));
    m = min(m, p / np);
    cout << m / n << endl;
    return 0;
}