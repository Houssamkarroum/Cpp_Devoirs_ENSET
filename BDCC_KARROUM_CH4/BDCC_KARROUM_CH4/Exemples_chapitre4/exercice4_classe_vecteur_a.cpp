#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
/// fonction qui retourne  l'objet
class vecteur{
    float x,y;
public :
    vecteur(float ,float );
    vecteur homotethie(float);
    void affiche();
    float det(vecteur);
};

vecteur::vecteur(float abs=0.,float ord=0.){
    x=abs;
    y=ord;
}
vecteur vecteur ::homotethie(float val){
    vecteur res;
    res.x=x*val;
    res.y=y*val;
    return res;
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
    vecteur v3=v2.homotethie(2);
    v3.affiche();
    cout << "le determinant de v1 et v2 apres homotethie de v2 par v3 = "<<v1.det(v3)<<"\n";
    return 0;
}

