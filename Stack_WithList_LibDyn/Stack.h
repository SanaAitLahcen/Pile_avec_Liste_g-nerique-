#pragma once
#include "Liste.h"
#include <stdexcept>
#include <iostream>

template <typename T>
class Stack {
private:
    Liste<T> liste;

public:
    Stack();
    ~Stack();

    void push(const T& val);  // Empiler un élément
    T pop();                 // Dépiler un élément
    bool isEmpty() const;    // Vérifier si la pile est vide
    T top() const;           // Obtenir l'élément au sommet de la pile
    void display() const;    // Afficher les éléments de la pile
    int Size() const;     // Obtenir la taille de la pile
};

// Implémentations des fonctions

template <typename T>
Stack<T>::Stack() {}

template <typename T>
Stack<T>::~Stack() {}

template <typename T>
void Stack<T>::push(const T& val) {
    liste.ajouterDevant(val);
}

template <typename T>
T Stack<T>::pop() 
{
    if (isEmpty()) 
    {
        throw std::runtime_error("Erreur : La pile est vide");
    }
    return liste.retirerDevant();
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return liste.estVide();
}

template <typename T>
T Stack<T>::top() const 
{
    if (isEmpty()) 
    {
        throw std::runtime_error("Erreur : La pile est vide");
    }
    return liste.getSommet();
}

template <typename T>
void Stack<T>::display() const 
{
    if (isEmpty()) 
    {
        std::cout << "La pile est vide." << std::endl;
    }
    else 
    {
        std::cout << "Les elements de la pile : ";
        liste.afficher();
    }
}

template <typename T>
int Stack<T>::Size() const 
{
    return liste.getTaille();
}
