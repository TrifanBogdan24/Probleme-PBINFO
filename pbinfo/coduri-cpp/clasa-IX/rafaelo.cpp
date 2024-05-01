// #561 - rafaelo
#include <iostream>
using namespace std;

int n, v[1000], cost, indice, sum;

int main()
{
    // citirea
    cin >> sum >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    // aflarea elementului minim si prima sa pozitie
    cost = v[1];    // minim
    indice = 1;     // pozitia
    for (int i = 2; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] < cost)
        {
            cost = v[i];
            indice = i;
        }
    }

    cout << (sum / cost) << " " << indice;
    return 0;
}
