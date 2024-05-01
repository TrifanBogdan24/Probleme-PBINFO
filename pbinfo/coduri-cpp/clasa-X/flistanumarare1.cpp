// #1173 - FListaNumarare1
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod *urm;
};

// SOLUTIA PBINFO INCEPE AICI

int numarare(nod *p)
{
    // capatul listei nu se va modifica global
    // parametrul nu este transmis prin referinta
    // cu ampersant &

    int nr = 0;
    while (p && p->urm)
    {
        if (p->info == p->urm->info)
            nr++;

        p = p->urm;
    }
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

    cout << "Numarul de elemente consecutive egale = " << numarare(head) << '\n';

    cout << "Final :";
    display_list(head); 

    return 0;
}
