// #236 - Sort2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sort2.in");
ofstream g("sort2.out");

int x, nr = 0, v[105];

int main()
{
    // citirea si inserarea in vector
    while (f >> x)    
        if (x <= 99)
            v[++nr] = x;

    if (!nr) g << "NU EXISTA";
    else {
        // sortarea crescatoare a vectorului
        for (int i = 1; i < nr; i++)
            for (int j = i + 1; j <= nr; j++)
                if (v[i] > v[j])
                    swap(v[i], v[j]);
        
        // afisarea vectorului
        for (int i = 1; i<= nr; i++)
            g << v[i] << " ";
    }

    f.close();
    g.close();
    return 0;
}
