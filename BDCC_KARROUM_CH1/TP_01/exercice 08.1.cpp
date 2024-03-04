#include<iostream>
#include <conio.h>
using namespace std;

void echange (int a, int b)
{
    int tampon;
    tampon = b;
    b = a   ;
    a   = tampon ;
    cout << "pendant l'echange : a = "<< a << "  b = " << b <<"\n";
}

main()
{
    int u = 5, v = 3;

    cout << "avant l'echange   : u = "<< u << "  v = " << v <<"\n";
    echange (u, v);
    cout << "apres l'echange   : u = "<< u << "  v = " << v <<"\n\n";

    getch();
}
