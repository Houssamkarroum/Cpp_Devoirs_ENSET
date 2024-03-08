#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    // Constructeur
    Point(int xValue = 0, int yValue = 0) : x(xValue), y(yValue) {}

    // Fonction pour initialiser le point à une nouvelle position
    void Initialiser(int newX, int newY)
    {
        x = newX;
        y = newY;
    }

    // Fonction pour déplacer le point à une nouvelle position
    void Deplacer(int deltaX, int deltaY)
    {
        x += deltaX;
        y += deltaY;
    }

    // Fonction pour afficher le point dans sa position actuelle
    void Afficher()
    {
        std::cout << "Le point est en position : (" << x << ", " << y << ")" << std::endl;
    }

    // Fonction pour effacer le point (en le déplaçant à l'origine)
    void Effacer()
    {
        x = 0;
        y = 0;
        std::cout << "Le point a ete efface." << std::endl;
    }
};

int main()
{
    Point p;             // Création d'un objet Point
    p.Initialiser(3, 4); // Initialisation du point à la position (3, 4)
    p.Afficher();        // Affichage de la position du point
    p.Deplacer(2, -1);   // Déplacement du point à la nouvelle position (5, 3)
    p.Afficher();        // Affichage de la nouvelle position du point
    p.Effacer();         // Effacement du point
    p.Afficher();        // Affichage de la nouvelle position du point après effacement

    return 0;
}
