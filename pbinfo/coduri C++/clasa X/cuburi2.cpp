// #877 - Cuburi2
#include <iostream>
#include <stack>

using namespace std;

stack <int> S;
stack <int> idx;    // cele doua stive vor avea aceeasi inaltime

void new_cube(int l, int indice, int &height_stack)
{
    if (S.empty())
    {
        // stiva de vida este vida
        S.push(l);
        idx.push(indice);
        height_stack = 1;
        return;
    }

    if (S.top() >= l)
    {
        // punem un cub nou pe varful stivei
        S.push(l);
        idx.push(indice);
        height_stack++;
        return;
    }

    // cubul nou are latura mai mare decat varful
    // golim stivele
    // si cubul va deveni unic element al stivei

    while(!S.empty() && l > S.top())
    {    
        S.pop();
        idx.pop();
        height_stack--;
    }

    S.push(l);
    idx.push(indice);
    height_stack++;
}

void afis()
{
    if (!idx.empty())
    {
        int indice = idx.top();
        idx.pop();
        afis();
        cout << indice << ' ';
    }
}

int main()
{
    int n = 0, lat = 0 , height_stack = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> lat;
        new_cube(lat, i, height_stack);
    }

    cout << height_stack << '\n';
    afis();
    cout << '\n';
    return 0;
}
