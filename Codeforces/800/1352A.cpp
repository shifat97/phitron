#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        int y = 1;
        vector<int> v;

        while (x > 0) {
            int last = x % 10;
            if (last != 0) {
                v.push_back(last * y);
            }
            x /= 10;
            y *= 10;
        }

        cout << v.size() << endl;
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }

        cout << endl;
    }
    return 0;
}