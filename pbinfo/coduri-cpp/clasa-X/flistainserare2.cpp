// #1181 - FListaInserare2
#include <iostream>

using namespace std;

struct nod { 
    int info;
    nod * urm;
};

// SOLUTIA PBINFO INCEPE AICI

void inserare(nod *p)
{
    // inseram dupa fiecare element par dublul sau

    nod *iter = p;

    while (iter)
    {
        if (iter->info % 2 == 0)
        {
            nod *nou_nod = new nod;
            nou_nod->info = 2 * iter->info;
            nou_nod->urm = iter->urm;
            iter->urm = nou_nod;
            iter = nou_nod;
        }

        iter = iter->urm;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

void add_tail_node(nod *&p, int x)
{
    nod *nod_nou = new nod;
    nod_nou->info = x;
    nod_nou->urm = NULL;

    if (!p)
    {
        // lista este vida
        p = nod_nou;
        return;
    }

    nod *iter = p;
    while (iter->urm)
        iter = iter->urm;
    iter->urm = nod_nou;
}

void print_list(nod *p)
{
    cout << "[";

    for (nod *iter = p; iter != NULL; iter = iter->urm)
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

    cout << "Numarul de elemenente al listei = ";
    cin >> n;
    cout << "Elementele listei : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        add_tail_node(head, x);
    }

    cout << "Lista initiala : ";
    print_list(head);

    inserare(head);
    cout << "Lista noua : ";
    print_list(head);
}