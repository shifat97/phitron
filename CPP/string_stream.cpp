#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream st(s);
    string word;

    while (st >> word)
    {
        cout << word << endl;
    }
    return 0;
}