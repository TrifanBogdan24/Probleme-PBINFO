// #1174 - FListaNumarare2
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod * urm;
};

// SOLUTIA PBINFO INCEPE AICI

bool prime(int x, int y)
{
    // functia intoarce TRUE daca numerele sunt prime intre ele
    // si false altfel

    while (x != y)
    {
        if (x > y)
            x -= y;
        else
            y -= x;
    }

    return (x == 1);
}

int numarare(nod * p)
{
    int nr = 0;

    for (nod *iter1 = p; iter1 && iter1->urm; iter1 = iter1->urm)
        for (nod *iter2 = iter1->urm; iter2; iter2 = iter2->urm)
            if (prime(iter1->info, iter2->info))
                nr++;

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI
void insert_to_tail(nod *&head, int x)
{
    nod *nou_nod = new nod;
    nou_nod->info = x;
    nou_nod->urm = NULL;

    if (!head)
    {
        // lista este vida
        head = nou_nod;
        return;
    }

    nod *iter = head;
    while (iter->urm)
        iter = iter->urm;
    iter->urm = nou_nod;
}

void display_list(nod *head)
{
    cout << "[";

    for (nod *iter = head; iter; iter = iter->urm)
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

    cout << "Initial :";
    display_list(head);

    cout << "Numarul de perechi prime intre ele = " << numarare(head) << '\n';

    return 0;
}
