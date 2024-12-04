#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = abs(a - b) + abs(a - c);
    int y = abs(a - b) + abs(b - c);
    int z = abs(a - c) + abs(b - c);
    int m = min(x, y);
    m = min(m, z);
    cout << m << endl;
    return 0;
}