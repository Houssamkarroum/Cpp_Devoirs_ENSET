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

        void affiche(char * ="position du point : ");
};



void Point::affiche(char *message){
    cout<<"le point ("<<x<<","<<y-1<<")\n";
    cout<<message;
    cout<<"le point ("<<x<<","<<y-1<<")\n";
}

int main(){
    Point a,b(40);
    a.affiche();
    b.affiche("point b : ");
    char texte[10] = "bonjour: ";

    Point c(3,12);
    c.affiche(texte);
    getch();
}

