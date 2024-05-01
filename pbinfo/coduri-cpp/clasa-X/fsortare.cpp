// #1476 - FSortare
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod *urm;
};

// SOLUTIA PBINFO INCEPE AICI

void sortareCrescator(nod *&prim)
{
    // dorim sa sortam crescator elementele unei liste

    for (nod *iter1 = prim; iter1 && iter1->urm; iter1 = iter1->urm)
        for (nod *iter2 = iter1->urm; iter2; iter2 = iter2->urm)
            if (iter1->info > iter2->info)
                swap(iter1->info, iter2->info);
}

// SOLUTIA PBINFO SE TERMINA AICI

void insert_to_tail(nod *&p, int x)
{
    nod *nou_nod = new nod;
    nou_nod->info = x;
    nou_nod->urm = NULL;

    if (!p)
    {
        // lista este vida
        p = nou_nod;
        return;
    }

    nod *iter = p;
    while (iter->urm)
        iter = iter->urm;
    iter->urm = nou_nod;
}

void print_list(nod *&p)
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
        insert_to_tail(head, x);
    }

    cout << "Lista initiala : "; print_list(head);
    sortareCrescator(head);
    cout << "Lista ordonata : "; print_list(head);

    return 0;
}
