#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    // Constructeur
    Point(int xValue = 0, int yValue = 0) : x(xValue), y(yValue) {}

    // Fonction pour initialiser le point à une nouvelle position
    void Initialiser(int newX, int newY) {
        x = newX;
        y = newY;
    }

    // Fonction pour déplacer le point à une nouvelle position
    void Deplacer(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }

    // Fonction pour afficher le point dans sa position actuelle
    void Afficher() {
        std::cout << "Le point est en position : (" << x << ", " << y << ")" << std::endl;
    }

    // Fonction pour effacer le point (en le déplaçant à l'origine)
    void Effacer() {
        x = 0;
        y = 0;
        std::cout << "Le point a été effacé." << std::endl;
    }
};

// Fonction Scene utilisant la classe Point
void Scene() {
    Point u; // Déclaration d'un point u
    u.Initialiser(3, 4); // Initialisation du point à la position (3, 4)
    u.Afficher(); // Affichage de la position initiale du point
    u.Deplacer(2, -1); // Déplacement du point à la nouvelle position (5, 3)
    u.Afficher(); // Affichage de la nouvelle position du point
}

// Programme principal
int main() {
    Scene(); // Appel de la fonction Scene

    return 0;
}
