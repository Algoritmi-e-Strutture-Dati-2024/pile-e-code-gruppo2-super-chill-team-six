#include <iostream>
#include "ListaPuntatori.cpp"

template <typename T>
class Coda{
    private:  //definizione

       ListaPuntatori<T> elementi;
       int Ultimo=elementi.lunghezza();   //definisco una variabile per sapere la lunghezza della lista

    public:  //operazioni

       void enqueue (T elem){
        elementi.inlista(elem, Ultimo);
        Ultimo++;
       }

       T dequeue(){
        T elem = elementi.leggilista(1);
        elementi.canclista(1);

        return elem;
       }
 
       T front(){
        return elementi.leggilista(1);
       }

      bool isEmpty(){
        if(elementi.listavuota() == true){
        return true;
        } else{
            return false;
        }
      } 

      int size (){
        return elementi.lunghezza();
      }
 };
