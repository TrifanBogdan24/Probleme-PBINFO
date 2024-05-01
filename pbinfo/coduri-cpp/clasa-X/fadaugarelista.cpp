// #1168 - FAdaugareLaLista
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod * urm;
};

// SOLUTIA PBINFO INCEPE AICI

void adaugare(nod * & p , int x)
{
    // adaugam la finalul listei

    nod *nou = new nod;
    nou->info = x;
    nou->urm = NULL;

    if (!p)
    {
        p = nou;
        return;    
    }

    nod *iter = p;    
    while (iter->urm)
        iter = iter->urm;
    
    iter->urm = nou;
}

// SOLUTIA PBINFO SE TERMINA AICI

void display_list(nod *p)
{
    cout << "[";
    for (nod *iter = p; iter; iter = iter->urm)
    {
        cout << iter->info;
        if (iter->urm)
            cout << " -> ";
    }
    cout << "]\n";
}

int main()
{
    int n = 0, x = 0;
    nod *head = NULL;

    cout << "Numarul de elemente = ";
    cin >> n;

    cout << "Elementele listei : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        adaugare(head, x);
    }

    cout << "Lista = ";
    display_list(head);
    
    return 0;
}
