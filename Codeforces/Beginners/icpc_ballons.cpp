#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r;
        int sum = 0, flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (auto ch : r)
            {
                if (ch == s[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                sum += 1;
            }
            else
            {
                sum += 2;
                r.push_back(s[i]);
            }
            flag = 0;
        }
        cout << sum << endl;
    }
    return 0;
}