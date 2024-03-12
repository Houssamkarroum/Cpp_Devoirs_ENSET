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

    	Point *symetrique();
    	void affiche();
};

Point *Point::symetrique()
{
	Point *res;
	res= new Point;
	res->x= -x;
	res->y= -y;
	return res;
}

void Point::affiche()
{
	cout<<"Le point est en "<<x<<" et "<<y<<"\n";
}

void main()
{
	Point a,b(1,6);
	a= *b.symetrique();
	a.affiche();
	b.affiche();
	getch();
}