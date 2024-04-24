#include <iostream>
using namespace std;

typedef enum {
    IA,
    Web,
    Logiciel,
    Systeme_Immersif,
    Cybersecurite
} Specialite;


void afficherSpecialite(Specialite spe) {
    switch (spe) {
    case IA:
        cout << "IA";
        break;
    case Web:
        cout << "Web";
        break;
    case Logiciel:
        cout << "Logiciel";
        break;
    case Systeme_Immersif:
        cout << "Système Immersif";
        break;
    case Cybersecurite:
        cout << "Cybersécurité";
        break;
    
    default:
        cout << "Invalide !";
        break;
    }
}


Specialite specialite_aleatoire() {
    switch (rand() % 5) {
    case 0:
        return IA;
    case 1:
        return Web;
    case 2:
        return Logiciel;
    case 3:
        return Systeme_Immersif;
    case 4:
        return Cybersecurite;
    
    default:
        return IA;
    }
}


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    
    int nombre_etudiants = 12 + rand() % 55;        // [12, 66]
    Specialite *etudiants = (Specialite*)malloc(sizeof(Specialite) * nombre_etudiants);

    for (int i = 0; i < nombre_etudiants; i++)
        etudiants[i] = specialite_aleatoire();

    for (int i = 0; i < nombre_etudiants; i++) {
        cout << "Etudiant " << i+1 << ": ";
        afficherSpecialite(etudiants[i]);
        cout << "\n";
    }

    return 0;
}
