// #2847 - List
#include <fstream>
#include <iostream>

using namespace std;

ifstream f("list.in");
ofstream g("list.out");

struct nod {
    int a, b;
    nod *leg;
};

nod *prim;
int n, x, y, m;

void afis(nod *p)
{
    for (; p; p = p->leg)
        g << p->a << " " << p->b << '\n';
}

void CreareV(nod *&p, int n)
{
    nod *q, *ultim;
    p = new nod;
    f >> p->a >> p->b;
    p->leg = NULL;
    ultim = p;
    
    for (int i = 2; i <= n; i++)
    {
        q = new nod;
        f >> q->a >> q->b;
        q->leg = NULL;
        ultim->leg = q;
        ultim = q;
    }
}

void adaugareR(nod *&prim)
{
    nod *s, *p, *u, *q;
    int x, y;
    s = new nod;
    s->leg = prim;
    u = s;
    p = prim;
    
    for (; p; p = p->leg)
    {
        x = p->a;
        y = p->b;
        
        if (x % 2 != 0 && y % 2 == 0) /// 2
        {
            q = new nod;
            q->b = (x + y) * 2;
            q->a = q->b - x;

            q->leg = p;
            u->leg = q;
        }
        else if (x % 2 != 0 && y % 2 != 0) /// 4
        {
            q = new nod;
            q->b = (x + y) / 2;
            q->a = q->b + x;

            q->leg = p;
            u->leg = q;
        }
        else if (x % 2 == 0 && y % 2 != 0) /// 1
        {

            q = new nod;
            q->a = (x + y) * 2;
            q->b = q->a - y;

            q->leg = p->leg;
            p->leg = q;
            p = p->leg;
        }
        else if (x % 2 == 0 && y % 2 == 0) /// 3
        {
            q = new nod;
            q->a = (x + y) / 2;
            q->b = q->a + y;

            q->leg = p->leg;
            p->leg = q;
            p = p->leg;
        }

        u = p;
    }
    prim = s->leg; // se actualizeaza adresa de inceput a listei
}

int main()
{
    f >> n;

    CreareV(prim, n);
    adaugareR(prim);
    afis(prim);

    f.close();
    g.close();
    return 0;
}
