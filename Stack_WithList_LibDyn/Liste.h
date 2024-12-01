#pragma once
#include"pch.h"
#include"Noeud.h"

template <typename T>
class Liste {
private:
    Noeud<T>* tete;
    int taille;

public:
    Liste() :  taille(0) {}
    ~Liste();
    void ajouterDevant(const T& val);
    T retirerDevant();
    bool estVide() const;
    int getTaille() const;
    T getSommet() const;
    void afficher() const;
};

template <typename T>
Liste<T>::~Liste() {
    while (!estVide()) 
    {
        retirerDevant();
    }
}

template <typename T>
void Liste<T>::ajouterDevant(const T& val) 
{
    tete = new Noeud<T>(val, tete);
    ++taille;
}

template <typename T>
T Liste<T>::retirerDevant() {
    if (estVide()) {
        throw std::runtime_error("Erreur : La liste est vide");
    }
    Noeud<T>* temp = tete;
    T val = temp->obtenirValeur();
    tete = tete->obtenirSuivant();
    delete temp;
    temp = nullptr;
    --taille;
    return val;
}

template <typename T>
bool Liste<T>::estVide() const 
{
    return tete == nullptr;
}

template <typename T>
int Liste<T>::getTaille() const 
{
    return taille;
}

template <typename T>
T Liste<T>::getSommet() const 
{
    if (estVide()) 
    {
        throw std::runtime_error("Erreur : La liste est vide");
    }
    return tete->obtenirValeur();
}

template<typename T>
inline void Liste<T>::afficher() const
{
 
        if (tete == nullptr) 
        {
            std::cout << "La liste est vide." << std::endl;
            return;
        }

        Noeud<T>* courant = tete;
        while (courant != nullptr) 
        {
            std::cout << courant->obtenirValeur() << " ";
            courant = courant->obtenirSuivant();
        }
        std::cout << std::endl;
    
}
