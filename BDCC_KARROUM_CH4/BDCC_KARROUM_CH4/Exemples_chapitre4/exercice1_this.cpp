#include<iostream> // le mot clé THIS :pointeur sur
#include<stdio.h> //l'objet l'ayant appel 
#include<stdlib.h> //utilisable uniquement dans une 
#include<conio.h> //fonction membre
using namespace std;

class point{
      int x,y;
      public:
        point(int abs = 0, int ord = 0){ //constructeur en ligne
            x=abs;
            y=ord;
        }
        void affiche();
};
void point::affiche(){
	cout << "Adresse :" << this << "- Coordonnes: "<<x<<" "<<y<<"\n";
}
int main(){
	point a(5),b(3,15);
	a.affiche(); 
	b.affiche();
	return 0;
}
