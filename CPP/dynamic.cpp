#include<bits/stdc++.h>
using namespace std;

/*
    ---Static vs Dynamic

    Static:
    1. Variable size is static. It can't be change later.
    2. Clears the memory automatically.

    Dynamic:
    1. Size can be change anytime.
    2. Do clear the memory util user instructs.

*/

int* p;

void fun() {
    int* x = new int;
    *x = 10;
    p = x;
    cout << "Fun -> " << *p << endl;
    return;
}

int main() {
    fun();
    cout << "Main -> " << *p << endl;
}

// int main() {
//     int *p = new int;
//     *p = 100;
//     cout << *p << endl;
//     return 0;
// }