#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class point
      {
           public:
           int x,y,couleur;
           public:
                  void initialiser(int,int,int);
                  void deplacer(int,int);
                  void afficher();
                  void effacer();                
      };
      void point::initialiser(int a,int b,int c)
      {
           x=a;
           y=b;
          couleur=c;
           }
      void point::deplacer(int dx,int dy)
      {
           effacer();
           x+=dx;
           y+=dy;
           }
      void point::afficher()
      {
            COORD point={x,y};
            HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(H,couleur);
           SetConsoleCursorPosition(H,point);
           cout<<"*";
           }
      void point::effacer()
      {
           int aide=couleur;
           couleur=0;
           afficher();
           couleur=aide;
           }
      
int main()
{
    point p1;
    int x,y;
    cout<<"X= ";
    cin>>x;
    cout<<"Y= ";
    cin>>y;
    p1.initialiser(x,y,2);
    p1.afficher();
    getch();
    return 0;
}
