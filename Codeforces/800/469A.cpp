#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int> dist;
    int tt = t;
    while (t--)
    {
        int p, q, n;

        cin >> p;
        for (int i = 0; i < p; i++)
        {
            cin >> n;
            dist.insert(n);
        }

        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> n;
            dist.insert(n);
        }
    }
    
    if (dist.size() >= tt)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}