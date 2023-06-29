// #2563 - FAdCresc
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod *urm;
};

// SOLUTIA PBINFO INCEPE AICI

void ins_cresc(nod *&p, int x)
{
    nod *q = new nod;
    q->info = x;
    q->urm = NULL;
    
    if (!p)
    {
        // lista este vida
        p = q;
        return;
    }

    nod *iter;
    if (x <= p->info)
    {
        // inserarea in cpatul din dreapta al listei

        q->urm = p;
        p = q;
        return;
    }

    iter = p;

    while (iter->urm && !(iter->info <= x && x <= iter->urm->info))
        iter = iter->urm;

    // inserarea in coada / interiorul listei
    q->urm = iter->urm;
    iter->urm = q;
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
    cout << "Elementele liste = [";
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

int main()
{
    int n = 0, x = 0;
    cout << "Introduceti numarul de elemente al liste n = ";
    cin >> n;

    cout << "Elementele listei = ";
    nod *head = NULL;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        add_to_tail(head, x);
    }
    
    cout << "\nInitial : ";
    afis(head);

    cout << "Valoarea de inserat = ";
    cin >> x;
    ins_cresc(head, x);
    cout << "\nDupa inserare : ";
    afis(head);

    return 0;
}
