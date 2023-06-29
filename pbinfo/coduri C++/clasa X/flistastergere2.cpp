// #1178 - FListaStergere2
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod *urm;
};

// SOLUTIA PBINFO INCEPE AICI

void sterge(nod * & p)
{
    // stergerea elementelor pare din lista


    // stergem elementele pare din capatul listei
    while (p && p->info % 2 == 0)
    {
        nod *stergator = p;
        p = p->urm;
        delete stergator;
    }

    if (!p)
        return;

    // in acest moment, primul element al listei este impar, sau nu exista
    nod *iterator = p;

    while (iterator && iterator->urm)
    {
        if (iterator->urm->info % 2 == 0)
        {
            nod *stergator = iterator->urm;
            iterator->urm = iterator->urm->urm;
            delete stergator;
        } else
            iterator = iterator->urm; 
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

void add_tail_node(nod * &p, int x)
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

    sterge(head);
    cout << "Lista FARA elementele PARE : ";
    print_list(head);
    return 0;
}
