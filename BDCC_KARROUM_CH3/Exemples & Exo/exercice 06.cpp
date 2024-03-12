#include <iostream>
#include <conio.h>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int a=0,int b=2){
            x = a;
            y = b;
        }

        int coincide(Point *);
        void affiche();
};

void Point::affiche(){
    cout<<" le point("<<x<<","<<y<<")";
}
int point::coincide(point *adpt)
{
	if ((this->x==adpt->x) && (this->y== adpt->y))
		return(1);
	else
		return(0);
}

int main(){
    int test1,test2;
    Point a,b(1),c(0,2);
    test1=a.coincide(b);
    test2=b.coincide(a);
    cout<<"a et b: "<<test1<<" ou "<<test2<<"\n";
    test1=a.coincide(c);
    test2=c.coincide(a);
    cout<<"a et c: "<<test1<<" ou "<<test2<<"\n";

    getch();
}

