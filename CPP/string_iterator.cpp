#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // cout << *s.begin() << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        // if (*it == ' ')
        //     continue;
        cout << *it << " ";
    }
    return 0;
}