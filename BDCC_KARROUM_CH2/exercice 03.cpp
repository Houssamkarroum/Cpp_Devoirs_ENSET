#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class point
      {
           int x,y,couleur;
           public:
                   point(int,int,int);
                  void deplacer(int,int);
                  void afficher();
                  void effacer();                
      };
      point::point(int a,int b,int c)
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
      void scene()
      {
            int x,y;
              cout<<"X= ";
              cin>>x;
              cout<<"Y= ";
               cin>>y;
              point u(x,y,2);
                  u.afficher();
                  getch();
                  u.deplacer(15,15);
                   u.afficher();
           }
int main()
{
    scene();
    getch();
    return 0;
}
