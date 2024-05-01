// #3212 - Cumparaturi2
#include <iostream>
using namespace std;

long long s, d, r ,m;

int main()
{
    cin >> s >> d >> r >> m;

    if (s >= d) cout << "drona";
    else if (s >= r) cout << "robot";
    else if(s >= m) cout << "masina";
    else cout << "nimic";

    return 0;
}
