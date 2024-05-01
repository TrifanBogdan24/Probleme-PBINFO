// #2569 - Alo
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("alo.in");
ofstream g("alo.out");

int main()
{
    int N = 0, E = 0, Nr = 0, D = 0, S = 0;
    
    f >> E >> N;
    S = E;
    
    for (int i = 1; i <= N; i++)
    {
        f >> Nr >> D;
        if (Nr % 10 == 5)
        {
            if (Nr / 10000 == 1)
                S = S - 2 * D;
            else if (Nr / 10000 == 2)
                S = S + D;
        }
    }
    
    g << S << '\n';
    
    f.close();
    g.close();

    return 0;
}
