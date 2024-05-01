// #1359 - ecuatie2
#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;

ifstream f("ecuatie2.in");
ofstream g("ecuatie2.out");

char s[1000], *p;

int char_to_int_nr()
{
    int nr = 0;
    
    while (*p >= '0' && *p <= '9')
    {
        nr = nr * 10 + *p - '0';
        p++;
    }
    return nr;
}

void P1()
{
    int a, b;
    p = s + 2;
    a = char_to_int_nr();
    p++;
    b = char_to_int_nr();
    p = s + 1;
    if (*p == '+') g << "2\n" << b - a;
    else if(*p == '-') g << "4\n" << b + a;
    else if(*p == '*') g << "6\n" << b / a;
    else if(*p == ':') g << "8\n" << b * a;
}

void P2()
{
    char *q = s;
    int a = 0, b = 0;
    p = s;
    a = char_to_int_nr();
    q = p;
    p = p + 3;
    b = char_to_int_nr();
    
    if (*q == '+') g << "1\n" << b - a;
    else if (*q == '-') g << "3\n" << a - b;
    else if (*q == '*') g<< "5\n" << b / a;
    else if (*q == ':') g << "7\n" << a / b;
}

int main()
{

    f.getline(s,10000);
    p = s + 1;

    if (s[0] == 'x') P1();
    else P2();

    f.close();
    g.close();
    return 0;
}