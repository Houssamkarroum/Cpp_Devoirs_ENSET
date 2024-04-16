#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class vecteur{
    float x,y;
public :
    vecteur(float ,float );
    void homotethie(float);
    void affiche();
    float det(vecteur);
};

vecteur::vecteur(float abs=0.,float ord=0.){
    x=abs;
    y=ord;
}
void vecteur::homotethie(float val){
    x=x*val;
    y=y*val;
}
float vecteur::det(vecteur vect){
    return (x*vect.y-y*vect.x);
}
void vecteur::affiche(){
    cout <<"x= "<<x<<" y= "<<y<<"\n";
}

int main (){
    vecteur v1(1,-3),v2(2);
    v1.affiche();
    v2.affiche();
    cout << "le determinant de v1 et v2 avant homotethie = "<<v1.det(v2)<<"\n";
    v2.homotethie(2);
    cout << "le determinant de v1 et v2 apres homotethie = "<<v1.det(v2)<<"\n";
    return 0;
}

