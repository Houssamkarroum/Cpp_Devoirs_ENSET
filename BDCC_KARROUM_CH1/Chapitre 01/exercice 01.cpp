#include<iostream>
#include<stdlib.h>
using namespace std;

struct complexe{
	double reel,im ;
};
void affiche(int);
void affiche(double);
void affiche(complexe);

int main(){
	int a = 5;
	double d = 0.0;
	complexe c ={1.0,-1.0};
	affiche(a);
	affiche(d);
	affiche(c);
}
void affiche(int i){
	cout << "TYPE de variable (int) :" << endl;
	cout << "Valeur : " << i << endl;
}
void affiche(double d){
	cout << "TYPE de variable (double) :" << endl;
	cout << "Valeur : " << d << endl; 
}
void affiche(complexe c){
	cout << "TYPE de variable (complexe) :" <<endl;
	cout << "Valeur : " << c.reel << endl;
	cout << "Valeur : " << c.im << endl;
}
