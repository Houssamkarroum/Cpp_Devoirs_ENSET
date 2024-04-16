#include<iostream>
using namespace std;
class compte_objet{
    
    public:
	static int ctr;
        compte_objet();
        ~compte_objet();
        static void compte();
};
int compte_objet::ctr = 0;
compte_objet::compte_objet(){
    cout<<"++ construction: il y a maintenant "<<++ctr<<" objets \n";
}

compte_objet::~compte_objet(){
    cout<<"-- destruction: il y a maintenant "<<--ctr<<" objets \n";
}

void compte_objet::compte(){
    cout<<"Appel compte: il y a  "<<ctr<<" objets \n";
}

void fonction(){
    compte_objet u,v;
}

int main (){
	void fonction();
    compte_objet :: compte();
    compte_objet a;
    compte_objet :: compte();
    fonction();
    compte_objet :: compte();
    compte_objet b;
    compte_objet :: compte();
    return 0;
}
