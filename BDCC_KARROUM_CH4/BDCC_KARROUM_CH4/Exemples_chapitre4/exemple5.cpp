#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
///la valeur de retour de la fonction symetrique est un objet de type point
///Transmission par valeur
class point{
      int x,y;
      public:
        point(int abs=0,int ord=2){
            x=abs;
            y=ord;
        }
        point symetrique( );
        void affiche();
};
point point::symetrique(){
    point res;
    res.x=-x;
    res.y=-y;
    return res;
}
void point::affiche(){
    cout<<"Le point est en "<<x<<" et "<< y<<"\n";
}

int main(){
    point a,b(1,6);
    a=b.symetrique();
    a.affiche();
    b.affiche();
    return 0;
}

