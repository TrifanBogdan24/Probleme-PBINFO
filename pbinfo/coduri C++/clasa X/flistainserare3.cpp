// #1182 - FListaInserare3
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod *urm;
};

// SOLUTIA PBINFO INCEPE AICI

void inserare(nod *&p)
{
    nod *iter;
    if (p->info % 2 == 0)
    {
        nod *nod_nou = new nod;
        nod_nou->info = p->info * 2;
        nod_nou->urm = p;
        p = nod_nou;
        iter = p->urm;
    }
    else
        iter = p;

    while (iter->urm != NULL)
    {
        if (iter->urm->info % 2 == 0)
        {

            nod *nod_nou = new nod;
            nod_nou->info = 2 * iter->urm->info;
            nod_nou->urm = NULL;

            nod_nou->urm = iter->urm;
            iter->urm = nod_nou;
            iter = iter->urm->urm;
        }
        else
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
    return 0;
}
