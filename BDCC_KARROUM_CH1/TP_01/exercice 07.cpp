#include<iostream>
#include <conio.h>
using namespace std;

float puissance( float x, int n)
{
    float p=1;
    int i;

    for (i=0; i<n; i++)
    p= p*x;

    return p;
}


void affiche (float x, int n = 0)
{
    if (x == 0)
    cout << "0^0 = 1\n" ;
    else
    cout << x << "^" << n << " = " << puissance(x,n)<<"\n";
}

void affiche (int n,float x=0)
{
    if (x == 0)
    cout << "0^0 = 1\n" ;
    else
    cout << x << "^" << n << " = " << puissance(x,n)<<"\n";
}

main ()
{
    int n = 5;
    float x =3.2;

    affiche (n, n);
    affiche (x, n);
    affiche (n, x);


    getch();
}
