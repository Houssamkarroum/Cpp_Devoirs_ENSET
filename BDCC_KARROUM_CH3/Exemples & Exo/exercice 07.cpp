
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class vecteur{
    float x,y;
public:
    vecteur(float,float);
    void homotethie(float);
    void affiche();
    float det1(vecteur *);
    float det2(vecteur &);
    float prod_scal(vecteur);
    vecteur somme(vecteur);

};
float vecteur::prod_scal(vecteur v){
    float b = (v.x - x),c =(v.y - y);
    b*=b;
    c*=c;
    b+=c;
    return sqrt(b);
}

vecteur vecteur::somme(vecteur v){
    vecteur a(0,0);
    a.x=v.x + x;
    a.y=v.y + y;

    return a;
}

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
