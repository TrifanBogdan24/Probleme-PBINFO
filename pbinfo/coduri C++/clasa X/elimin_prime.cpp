// #2198 - elimin_prime
#include <fstream>
#include <iostream>

using namespace std;

ifstream f("elimin_prime.in");
ofstream g("elimin_prime.out");

struct nod {
    int inf;
    nod *leg;
};

nod *p;
int n;

void CreareV(nod *&p, int n)
{

    nod *q, *ultim;
    p = new nod;
    f >> p->inf;
    p->leg = NULL;
    ultim = p;
    
    for (int i = 2; i <= n; i++)
    {
        q = new nod;
        f >> q->inf;
        q->leg = NULL;
        ultim->leg = q;
        ultim = q;
    }
}

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

void stergere(nod *&prim)
{

    if (p)
    {
        int nr = 1;
        nod *s, *p, *u, *q;
        s = new nod;
        s->leg = prim;
        u = s;
        p = prim;

        while (p)
        {
            if (is_prime(nr) == 1)
            {
                q = p;
                u->leg = p->leg;
                p = p->leg;
                g << q->inf << " ";
                delete q;
            }
            else
            {
                u = p;
                p = p->leg;
            }
            nr++;
        }
        prim = s->leg;
        stergere(prim);
    }
}

int main()
{
    f >> n;
    CreareV(p, n);
    stergere(p);

    f.close();
    g.close();
    return 0;
}
