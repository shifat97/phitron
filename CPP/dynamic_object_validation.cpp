#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersy;
    Cricketer(string country, int jersy)
    {
        this->country = country;
        this->jersy = jersy;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer("India", 100);
    Cricketer *kohli = new Cricketer("India", 18);
    *kohli = *dhoni;
    cout << dhoni->jersy << " " << kohli->jersy << endl;
    delete dhoni;
    cout << kohli->country << " " << kohli->jersy << endl;
    return 0;
}