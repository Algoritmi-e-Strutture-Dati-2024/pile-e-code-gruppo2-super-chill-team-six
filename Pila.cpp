#include <iostream>
#include "ListaPuntatori.cpp"

template <typename T>
class Pila{
    private:  //definizione

       ListaPuntatori<T> elementi;

    public:   //operazioni

       void push (T elem){         //aggiugni elemento alla pila
        elementi.inslista(elem, 1);
       }

       T pop(){                    //restiturisce elemento in testa e lo elimina 
         T elem = elementi.leggilista(1);
         elementi.canclista(1);

        return elem;
       }

       T top() {                  //restituisce elemento in cima 
        return elementi.leggilista(1);
       }

       bool isEmpty() {          //verifica se la lista è vuota
        if(elementi.listavuota() == true){
            return true;
        } else{
            return false;
        }
       }

       int size () {            //restituisce lunghezza della lista
        return elementi.lunghezza();
       }
};
