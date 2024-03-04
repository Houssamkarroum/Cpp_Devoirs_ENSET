#include<iostream>
#include <conio.h>
using namespace std;

void test(int n = 0, float x = 2.5)
{
    cout << "Fontion N1 : ";
    cout << "n = " << n << " x = " << x << "\n";
}

void test(float x = 4.1, int n = 2)
{
    cout << "Fontion N2 : ";
    cout << "n = " << n << " x = " << x << "\n";
}
main()

{
    int   i = 5  ;
    float r = 3.2;

    test ( i, r);
    test ( r, i);
    test (i);
    test (r);

}
