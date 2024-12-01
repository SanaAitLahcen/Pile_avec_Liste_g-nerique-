#include"pch.h"


int main() {
    Stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display(); // Affiche : Les éléments de la pile : 30 20 10

    std::cout << "Sommet de la pile : " << stack.top() << std::endl; // Affiche : Sommet de la pile : 30

    cout <<"Element depiler : "<<stack.pop() <<endl; // Retire 30
    stack.display(); // Affiche : Les éléments de la pile : 20 10

    cout << "Size de la pile :" <<stack.Size()<< endl; //afficher la taille de la pile

    return 0;
}
