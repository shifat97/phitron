#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sol[n];
    for (int i = 0; i < n; i++) {
        cin >> sol[i];
    }
    int max = *max_element(sol, sol + n);
    int min = *min_element(sol, sol + n);
    if (sol[0] == max && sol[n-1] == min) {
        cout << 0 << endl;
    } else if (sol[0] != max && sol[n-1] == min) {
        cout << 1 << endl;
    } else if (sol[0] == max && sol[n-1] != min) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
    return 0;
}