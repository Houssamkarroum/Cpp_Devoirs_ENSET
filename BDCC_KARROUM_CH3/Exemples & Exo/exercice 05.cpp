#include <iostream>
#include <conio.h>
using namespace std;

class Point{
    
    int x,y;
    public:
    	Point(int abs=0,int ord=0)
    	{
    		x=abs;
    		y=ord;
    	}

    	void affiche();
};

void Point::affiche()
{
	cout<<"Adresse : "<<this<<" - Coordonnees: "<<x<<" "<<y<<"\n";
}

void main()
{
	Point a(5) ,b(3,15);
	a.affiche();
	b.affiche();
	getch();
}