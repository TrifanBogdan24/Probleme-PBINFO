// #3141 - atbash
#include <cstring>
#include <fstream>

using namespace std;

fstream f("atbash.in");
ofstream g("atbash.out");

int main()
{
    char x = 'a';

    while (f >> x)
    {
        x = char(int('Z') - (int(x) - int('A')));
        g << x;
    }

    g << '\n';
    f.close();
    g.close();
    return 0;
}
