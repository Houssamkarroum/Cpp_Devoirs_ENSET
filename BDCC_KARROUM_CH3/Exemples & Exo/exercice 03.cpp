#include<iostream>
#include<conio.h>
using namespace std;

class vecteur{
    float x,y;
public:
    vecteur(float,float);
    void homotethie(float);
    void affiche();
    float det1(vecteur);
    float det2(vecteur);
};

vecteur::vecteur(float abs=0, float ord =0.){
    x=abs;
    y=ord;
}

void vecteur::homotethie(float val){
    x=x*val;
    y=y*val;
}

void vecteur::affiche(){
    cout<<"x = "<<x<<" y= "<<y<<"\n";
}

float vecteur::det1(vecteur *v){
    return (v->x*y - v->y*x);
}

float vecteur::det2(vecteur &v){
    return (v.x*y - v.y*x);
}
