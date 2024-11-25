#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream st(s);
    string word;
    st >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (st >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
    return 0;
}