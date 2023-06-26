// #1321 - sir_munte
#include <iostream>

using namespace std;

int is_valley(int n, long long v[10003])
{
    // functia va returna 1 doar daca vectorul v,
    // primit ca parametru, formeaza UN SINGUR munte
    int nr_buttoms = 0;
    int index = 0;
    for (int i = 2; i < n; i++)
    {
        if (v[i - 1] > v[i] && v[i] < v[i + 1])
        {
            nr_buttoms++;
            index = i;
        }
    }

    if (nr_buttoms != 1)
        return 0;

    for (int i = 1; i < index; i++)
        if (v[i] <= v[i + 1])
            return 0;

    for (int i = index; i < n; i++)
        if (v[i] >= v[i + 1])
            return 0;

    return 1;
}

int main()
{
    // declararea si initalizarea variabilelor
    int n = 0;
    long long v[1003];

    for (int i = 0; i < 1003; i++)
        v[i] = 0;
     
    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    // rezolvarea problemei
    if(is_valley(n, v)) cout << "DA";
    else cout << "NU";

    return 0;
}
