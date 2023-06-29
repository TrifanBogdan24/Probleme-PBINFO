// #1222 - TV
#include <fstream>

using namespace std;

ifstream f("tv.in");
ofstream g("tv.out");

int c, N;

int d;

char h1, h2, m1, m2, s1, s2;
char ch;

int Mars[87000];

void Load ()
{
    f >> d;

    f >> h1 >> h2;

    f >> ch;

    f >> m1 >> m2;

    f >> ch;

    f >> s1 >> s2;

    int h = (h1 - '0') * 10 + (h2 - '0');
    int m = (m1 - '0') * 10 + (m2 - '0');
    int s = (s1 - '0') * 10 + (s2 - '0');

    int Start = h * 3600 + m * 60 + s;
    int Finish = Start + d - 1;

    Mars[Start]++;
    Mars[Finish + 1]--;

    return;
}

void Read ()
{
    f >> c >> N;

    for (int i = 1; i <= N; ++i)
        Load();

    return;
}

void Do_correct_Mars_Trick ()
{
    for(int i = 1; i < 24 * 60 * 60; ++i)
        Mars[i] += Mars[i - 1];

    return;
}

void Write_in_hms (int r)
{
    int h = r / 3600;

    int m = (r % 3600) / 60;

    int s = (r % 60);

    g << (h / 10) << (h % 10) << ':' << (m / 10) << (m % 10) << ':' << (s / 10) << (s % 10) << '\n';

    return;
}

void Solve_1 ()
{
    int r = 0;

    for (int i = 0; i < 24 * 60 * 60; ++i)
        if(!Mars[i])
            ++r;

    Write_in_hms(r);

    return;
}

void Solve_2 ()
{
    int r = 0;

    for (int i = 1; i < 24 * 60 * 60; ++i)
        if(Mars[i] > Mars[r])
            r = i;

    Write_in_hms(r);

    return;
}

int main ()
{
    Read();

    Do_correct_Mars_Trick();

    if (c == 1)Solve_1();
    else Solve_2();

    f.close();
    g.close();
    return 0;
}
