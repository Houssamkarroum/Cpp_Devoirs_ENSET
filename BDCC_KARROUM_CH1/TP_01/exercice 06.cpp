#include<iostream>
#include <conio.h>
using namespace std;

void essai(float x, char c, int n = 0)
{
    cout << "Fontion N1: x = " << x << " c = " << c << " n = " <<n << "\n\n";
}


void essai(float x, int n)
{
    cout << "Fontion N2 : x = " << x << " n = " <<n << "\n";

}

main()
{
    char  l = 'z';
    int   u = 4  ;
    float y = 2.0;

    essai(y, l, u);
    essai(y, l);
    essai(y, u);
    essai(u, u);
    essai(u, l);
    essai(y, y, u);

    getch();

}
