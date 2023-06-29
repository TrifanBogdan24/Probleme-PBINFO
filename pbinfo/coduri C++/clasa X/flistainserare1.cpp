// #1180 - FListaInserare1
#include <iostream>

using namespace std;

struct nod
{
    int info;
    nod *urm;
};

// SOLUTIA PBINFO INCEPE AICI

void inserare(nod *&p, nod *q, int x)
{
    if (!p || !q)
        return;     // unul dintre noduri indica spre o lista vida

    nod *nou_nod = new nod;
    nou_nod->info = x;
    nou_nod->urm = q;

    if (p == q)
    {
        // inseram inaintea primului element
        p = nou_nod;
        return;
    }

    nod *iter = p;
    while (iter->urm != q)
        iter = iter->urm;
    
    iter->urm = nou_nod;
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

    cout << "Elementul de inserat = ";
    cin >> x;

    do {
        cout << "Inainte de al catelea de element sa se insereze ? ";
        cin >> idx;
        if (idx < 0 || idx > n)
            cout << "Indice invalid\n";
    } while (idx < 0 || idx > n);
    
    nod *knode = get_kth_node(head, idx);
    cout << "Elementul de la pozitia " << idx << " = " << knode->info << "\n";

    inserare(head, knode, x);

    cout << "Lista noua : ";
    print_list(head);

    return 0;
}
