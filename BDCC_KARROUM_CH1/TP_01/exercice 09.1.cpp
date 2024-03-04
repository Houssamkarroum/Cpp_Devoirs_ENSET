#include<iostream>
#include <conio.h>
using namespace std;

struct essai
{
    int n;
    float x;
};

void remis_a_zero(essai &a)
{
    a.n = 0;
    a.x = 0;
}

main()
{
    essai u;
    u.n = 5;
    u.x = 3.3;
    remis_a_zero(u);
    cout << "u.n = " << u.n << "  u.x = " << u.x<<"\n\n";

    getch();

}
