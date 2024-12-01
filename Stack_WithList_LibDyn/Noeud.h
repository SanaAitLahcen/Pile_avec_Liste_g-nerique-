#pragma once
#include<stdexcept>
#include <iostream>
using namespace std;

template <typename T>
class Noeud {
private:
    T valeur;
    Noeud<T>* suivant;

public:
    Noeud(T, Noeud<T>*);

    T obtenirValeur() const;
    Noeud<T>* obtenirSuivant() const;
};

template <typename T>
Noeud<T>::Noeud(T val, Noeud<T>* next) : valeur(val), suivant(next) {}

template <typename T>
T Noeud<T>::obtenirValeur() const 
{
    return valeur;
}

template <typename T>
Noeud<T>* Noeud<T>::obtenirSuivant() const 
{
    return suivant;
}
