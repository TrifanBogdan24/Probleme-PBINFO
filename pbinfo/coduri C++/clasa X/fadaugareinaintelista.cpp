// #1170 - FAdaugareInainteLista
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod * urm;
};

// SOLUTIA PBINFO INCEPE AICI


void adaugareInainte(nod * & p , int x)
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

    nou_nod->urm = p;
    p = nou_nod;
}

// SOLUTIA PBINFO SE TERMINA AICI

void print_list(nod *head)
{
    cout << "[";
    for (nod *iter = head; iter; iter = iter->urm)
    {
        cout << iter->info;
        if (iter->urm)
            cout <<" -> ";
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
        adaugareInainte(head, x);
    }

    cout << "Elementele in ordinea inversa citirii : ";
    print_list(head);

    return 0;
}
