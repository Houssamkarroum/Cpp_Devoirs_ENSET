#include <iostream>
#include <conio.h>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(int a){
            x = a;
            y = a;
        }
        Point(int a,int b){
            x = a;
            y = b;
        }

        void affiche();
};



void Point::affiche(){
    cout<<"le point ("<<x<<","<<y<<")\n";
}

int main(){
    Point a,b(5);
    a.affiche();
    b.affiche();
    Point c(3,12);
    c.affiche();
    getch();
}

