// #2802 - Clasa
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int N, P;
long double Fact = 3.000000, mt = 0;

struct Student {
    char FN[105], SN[105];
    long double m1, m2, m3, mg;
};
Student A[105];

void Read()
{
    cin >> N >> P;
    for (int i = 1; i <= N; ++i)
    {
        cin >> (A[i].FN + 1) >> (A[i].SN + 1) >> A[i].m1 >> A[i].m2 >> A[i].m3;
        A[i].mg = (A[i].m1 + A[i].m2 + A[i].m3) / Fact;
        mt += A[i].mg;
    }
    long double aux = N;
    aux = aux * (long double)1.000000;
    mt = (long double)mt / aux;
    return;
}
void Task1()
{
    int ans = 0;
    for (int i = 1; i <= N; ++i)
    {
        long double X = A[i].mg;
        X = X * (long double)(1000.000000);
        int cX = X;
        long double Y = mt;
        Y = Y * (long double)(1000.0000000);
        int cY = Y;
    
        if (cX - cY >= 0)
            ++ans;
    }
    cout << ans << '\n';
}
void Write()
{
    cout << setprecision(2) << fixed;
    cout << mt << '\n';

    for (int i = 1; i <= N; ++i)
        cout << (A[i].FN + 1) << ' ' << (A[i].SN + 1) << ' ' << A[i].mg << '\n';
}

void Task2()
{
    for (int i = 1; i < N; ++i)
    {
        for (int j = i + 1; j <= N; ++j)
        {
            if (A[i].mg > A[j].mg)
                continue;
    
            if (A[i].mg == A[j].mg && strcmp(A[i].FN + 1, A[j].FN + 1) < 0)
                continue;
    
            if (A[i].mg == A[j].mg && strcmp(A[i].FN + 1, A[j].FN + 1) == 0 && strcmp(A[i].SN + 1, A[j].SN + 1) < 0)
                continue;
    
            swap(A[i], A[j]);
        }
    }

    Write();
}

int main()
{
    Read();
    
    if (P == 1)
        Task1();
    else
        Task2();
    
    return 0;
}
