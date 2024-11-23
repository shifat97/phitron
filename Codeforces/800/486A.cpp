#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << ((n / 2) + (n % 2)) * -1 << endl;
    }
    return 0;
}

// for (long long i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             f += i;
//         } else {
//             f -= i;
//         }
//     }