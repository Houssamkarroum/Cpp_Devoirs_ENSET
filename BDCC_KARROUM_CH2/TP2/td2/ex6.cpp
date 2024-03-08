#include <iostream>

class SuiteAr
{
private:
    int *val; // Tableau pour stocker les termes de la suite
    int nb;   // Nombre de termes de la suite

public:
    // Constructeur
    SuiteAr(int nombreTermes) : nb(nombreTermes)
    {
        val = new int[nb]; // Allocation de mémoire pour le tableau
        // Calcul des termes de la suite arithmétique de raison nulle
        for (int i = 0; i < nb; ++i)
        {
            val[i] = i; // Les termes sont égaux à leur indice
        }
    }

    // Destructeur
    ~SuiteAr()
    {
        delete[] val; // Libération de la mémoire allouée pour le tableau
    }

    // Fonction pour afficher les termes de la suite
    void AfficherTermes()
    {
        std::cout << "Les termes de la suite arithmétique sont : ";
        for (int i = 0; i < nb; ++i)
        {
            std::cout << val[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    // Création d'un objet de la classe SuiteAr
    SuiteAr suite(5);       // Calculera les 5 premiers termes de la suite arithmétique de raison nulle
    suite.AfficherTermes(); // Affichage des termes de la suite

    return 0;
}
