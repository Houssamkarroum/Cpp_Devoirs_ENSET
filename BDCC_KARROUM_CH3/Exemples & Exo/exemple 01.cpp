#include <iostream>
#include <conio.h>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point();
        Point(int);
        Point(int,int);

        void affiche();
        void affiche(char *);
};

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int a){
    x = a;
    y = a;
}

Point::Point(int a,int b){
    x = a;
    y = b;
}


void Point::affiche(){
    cout<<"le point ("<<x<<","<<y<<")\n";
}

void Point::affiche(char *message){
    cout<<message;
    affiche();
}

int main(){
    Point a;
    a.affiche();
    Point b(5);
    b.affiche(" point b ");
    Point c(3,12);
    c.affiche(" point c ");
    getch();
}
