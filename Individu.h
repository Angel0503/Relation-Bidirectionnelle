/**
 * @file Individu.h
 * @author Lopisteguy (you@domain.com)
 * @brief Spécifie une classe Individu en relation reciproque avec une Voiture
 * @details Ce fichier implante un Individu définit par un nom et prenom.
 * 
 * La classe définit également la Voiture conduite par l'Individu
 * @version 1.0
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Représente un Individu
 * @warning Actuellement un Individu est associé à au plus une Voiture
 * @deprecated A la place utilisez la classe Personne
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom; 

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;  

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    /**
     * @brief Construit un nouvel objet Individu à partir de son nom et prénom
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString

    /**
     * @brief Retourne l'identité de l'individu
     * 
     * @return Une chaine sous la forme "nom prenom" 
     * 
     * @bug Une espace de trop entre le nom et le prenom
     * 
     * @todo Ajouter un parametre pour choisir si on retourne une chaine du type "nom prenom" ou "prenom nom"
     */
    string toString();     
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques

    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Definit la Voiture conduite par l'Individu
     * 
     * @param [in] voiture  un pointeur vers l'objet Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H