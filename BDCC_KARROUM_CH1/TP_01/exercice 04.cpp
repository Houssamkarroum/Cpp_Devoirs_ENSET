#include<iostream>
#include <conio.h>
using namespace std;

float puissance( float x, int n = 4)
{
    float p=1;
    int i;

    for (i=0; i<n; i++)
    p=p*x;

    return p;
}

main()
{
    int n = 2 ;
    float x = 2.1 ;
    float a,b,c,d;

    a = puissance(x, x);
    b = puissance(n, n);
    c = puissance(n, x);
    d = puissance(x, n);

    cout << "int   int   : "<<b <<"\n\n";
    cout << "float float : "<<a <<"\n\n";
    cout << "int   float : "<<c <<"\n\n";
    cout << "float int   : "<<d <<"\n\n";


    getch();
}
