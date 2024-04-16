#include <iostream>
#include <conio.h>


using namespace std;

class note
{
    float value;

public :
    void input();
    void print();
    void set (float);
    float get();
    char* apprecier();
};

void note :: input ()
{
    cout << "saisisez la note : ";
    cin >> value;
    if (value > 20 || value <0)
    {
        cout << "la note ne doit pas etre >20 ou <0: ";
        note :: input ();
    }
}

void note :: print ()
{
    cout << "la note est : " << value;
}

void note :: set(float v)
{
    value = v;
}

float note :: get ()
{
    return value;
}

char* note :: apprecier ()
{
    if (value >= 16)
    return "tres bien";
    else if (value <= 15 && value >=12)
    return "bien";
    else if (value <12 && value >=10)
    return "passable";
    else return "mauvaise note";
}
main()
{
    note a;
    a.input();
    char* chaine = a.apprecier();
    cout <<"\n"<< chaine <<"\n";
    getch();
}
