// #1943 - Bacterie
#include <fstream>
using namespace std;
ifstream f("bacterie.in");
ofstream g("bacterie.out");
long long n, m;

int main()
{
    f >> n >> m;
    if (n > m)
        swap(n, m);

    g << n * m - n * (n + 1) / 2;
    f.close();
    g.close();
    return 0;
}
