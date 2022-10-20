/**
 * @file Individu.h
 * @author Auteur : Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 12/08/2022
 * @details Ce fichier decrit une classe Individu
 * 
 * Un Individu est défini par un nom, prenom et une Voiture
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

class Individu
/**
 * @brief Represente un Individu à partir de son nom, prenom, Voiture
 * 
 */
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
     * @brief Construction d'un nouvel objet Individu
     * 
     * @param nom Le nom de l'individu
     * @param prenom Le prenom de l'individu
     */
    Individu(string nom = "" , string prenom = "");
    // destructeur
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string -> Le nom et prenom
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Set la voiture utilisé
     * @warning L'Individu ne peut conduire qu'une voiture
     * @bug Mec t'as pas faim ???!!!!
     * @param [in] voiture 
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H