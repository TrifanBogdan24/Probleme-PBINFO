// #1177 - FListaStergere1
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod *urm;
};

// SOLUTIA PBINFO INCEPE AICI

void sterge(nod * & p, nod * q)
{
    // se doreste stergerea nodului q

    if (!p && !q)
        return;     // unul dintre noduri indica catre o lista vida

    if (p == q)
    {
        // stergerea primului element din lista
        p = p->urm;
        delete q;
        return;
    }

    nod *iter = p;
    while (iter->urm != q)
        iter = iter->urm;


    iter->urm = iter->urm->urm;
    delete q;
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

void afis(nod *p)
{
    cout << "[";
    nod *it = p;
    while (it)
    {
        cout << it->info;
        if (it->urm)
            cout << " -> ";
        it = it->urm;
    }
    cout << "]\n";
}

nod *get_kth_node(nod *p, int k)
{
    // functia returneaza nodul de la pozitia k din lista
    nod *iter = p;
    
    k--;
    while (k && iter)
    {
        iter = iter->urm;
        k--;
    }

    if (!k)
        return iter;

    return NULL;
}

int main()
{
    int n = 0, x = 0, idx = 0;
    cout << "Introduceti numarul de elemente al liste n = ";
    cin >> n;

    cout << "Elementele listei = ";
    
    nod *head = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        add_to_tail(head, x);
    }
    
    cout << "Initial : ";
    afis(head);


    do {
        cout << "Dupa al catelea nod sa se faca stergerea? ";
        cin >> idx;
        if (idx < 0 || idx > n)
            cout << "Indice invalid\n";
    } while (idx < 0 || idx > n);
    
    nod *knode = get_kth_node(head, idx);
    cout << "Elementul de la pozitia " << idx << " = " << knode->info << "\n";


    sterge(head, knode);
    cout << "\nDupa stergere : ";
    afis(head);

    return 0;
}
