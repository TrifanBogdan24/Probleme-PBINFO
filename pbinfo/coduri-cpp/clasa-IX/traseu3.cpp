// #2962 - traseu3
#include <fstream>

using namespace std;

ifstream f("traseu.in");
ofstream g("traseu.out");

int N, M, A[505][505];

int Line[505 * 505], Column[505 * 505];

int Min[505];

/// Min[i], 1 <= i <= N = pozitia minima a unei coloane care a fost deja luata de o valoare pana la un moment dat;

int main ()
{
    f >> N >> M;

    for(int i = 1; i <= N; ++i)
        for(int j = 1; j <= M; ++j)
        {
            f >> A[i][j];

            Line[A[i][j]] = i;
            Column[A[i][j]] = j;
        }

    int Max = 0;
    bool Ok = 0;

    for(int i = 1; i <= N * M; ++i)
    {
        /// Valoarea "i" (valoarea mai mare) este punctul de sfarsit al traseului;

        int Linie = Line[i]; /// Linia pe care apare valoarea "i";
        int Coloana = Column[i]; /// Coloana pe care apare valoarea "i";

        for (int j = 1; j <= Linie; ++j)
        {
            if (Min[j] && Min[j] <= Coloana)
            {
                Ok = 1;
                Max = max(Max, Linie - j + Coloana - Min[j]);
            }
        }

        if(!Min[Linie])
            Min[Linie] = Coloana;
        else
            Min[Linie] = min(Min[Linie], Coloana);
    }

    if (Ok == 0)
    {
        g << 0 << '\n';

        return 0;
    }

    g << Max + 1 << '\n';
    f.close();
    g.close();
    return 0;
}