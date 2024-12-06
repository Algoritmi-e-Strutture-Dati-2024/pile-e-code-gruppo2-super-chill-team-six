#include <iostream>
#include "ListaPuntatori.cpp"
#include "Pila.cpp"
#include "Coda.cpp"

int main() {
    //Operazioni su una pila
    Pila<int> pila1;

    pila1.push(1);
    pila1.push(5);
    pila1.push(54);

    std::cout << "Elemento in cima alla lista: " << pila1.top() << std::endl;
    std::cout << "Eliminazione dell'elemento in cima alla lista: " << pila1.pop() << std:: endl;
    std::cout << "Elemento in cima alla lista: " << pila1.top() << std::endl;
    std::cout << "Lunghezza della lista: " << pila1.size() << std::endl;

    if(pila1.isEmpty() == true) {
        std::cout << "La lista è vuota" << std::endl;
    }
    else {
        std::cout << "La lista ha elementi al suo interno" << std::endl;
    }

    std::cout << " " << std::endl;

    //Operazioni su una coda
    Coda<int> coda1;

    coda1.enqueue(1);
    coda1.enqueue(5);
    coda1.enqueue(54);

    std::cout << "Elemento in testa alla coda: " << coda1.front() << std::endl;
    std::cout << "Eliminazione dell'elemento in testa alla coda: " << coda1.dequeue() << std:: endl;
    std::cout << "Elemento in testa alla coda: " << coda1.front() << std::endl;
    std::cout << "Lunghezza della coda: " << coda1.size() << std::endl;

    if(coda1.isEmpty() == true) {
        std::cout << "La coda è vuota" << std::endl;
    }
    else {
        std::cout << "La coda ha elementi al suo interno" << std::endl;
    }
}
