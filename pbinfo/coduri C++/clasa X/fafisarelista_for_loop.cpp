// #1169 - FAfisareLista
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod * urm;
};

// SOLTUIA PBINFO INCEPE AICI

void afisare(nod * p)
{
    // capatul listei nu se va modifica global
    // intrucat parametrul nu este transmis prin referinta
    // adica cu ampersant &

    for (nod *iter = p; iter; iter = iter->urm)
    {
        cout << iter->info;
        if (iter->urm)
            cout << ' ';
    }

    cout << '\n';
}

// SOLUTIA PBINFO SE TERMINA AICI

void add_to_tail(nod *&p, int x)
{
    nod *q = new nod;
    q->info = x;
    q->urm = NULL;
    
    if (!p)
    {
        // empty list
        p = q;
        return;
    }

    nod *it = p;
    while (it->urm)
        it = it->urm;
    
    it->urm = q;
}


int main()
{
    int n = 0, x = 0;
    nod *head = NULL;
    
    cout << "Introduceti numarul de elemente al liste n = ";
    cin >> n;

    cout << "Elementele listei = ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        add_to_tail(head, x);
    }
    
    afisare(head);
    return 0;
}
