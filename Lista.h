//
// Created by Carla Lazar on 02.05.2022.
//

#ifndef PROIECT_SDA_TAD_LISTA_H
#define PROIECT_SDA_TAD_LISTA_H
#include <cstring>
#include<iostream>
using namespace std;

template<class T, int cap = 100>
class Lista{
private:
    T elem[cap];
    int size;
public:
    ///
    Lista();
    ///
    /// \param l
    Lista(const Lista<T, cap>& l);
    ~Lista();
    /// adauga un element in vector
    /// \param el
    void addElem(T el);
    /// sterge un element de la pozitia indicata
    /// \param poz pozitia de la care dorim sa stergem elementul
    void deleteElem(int poz);
    /// modifica un element, ii da elementului nou valoarea elementului vechi
    /// \param elemVechi elementul vechi pe care dorim sa l modificam
    /// \param elemNou elementul nou, modificat, caruia i-am dat valoarea celui vechi
    int modify(T elemVechi, T elemNou);
    /// acceseaza un element din vector de la pozitia indicata
    /// \param poz
    /// \return
    T getElemPoz(int poz);
    /// afiseaza lungimea vectorului
    /// \return
    int getSize();
    ///afiseara toate elementele din vector
    void getAll();

    int cautaElemPoz(int poz);

    int searchName(const char* el);

    int searchId(const char*el);

};

template<class T, int cap>
Lista<T, cap>::Lista() {
    this->size = 0;
}

template<class T, int cap>
Lista<T, cap>::Lista(const Lista<T, cap> &l) {
    this->size = l.size;
    for(int i = 0;i < l.size; i++)
        this->elem[i] = l.elem[i];
}

template<class T, int cap>
Lista<T, cap>::~Lista() {
    this->size = 0;
}

template<class T, int cap>
void Lista<T, cap>::addElem(T el) {
    if(this->size < cap)
        this->elem[this->size++] = el;
    else
        cout<<"Nu exista destul spatiu pentru a introduce un element!";
}

template<class T, int cap>
void Lista<T, cap>::deleteElem(int poz) {
    this->elem[poz] = this->elem[--this->size];
}

template<class T, int cap>
T Lista<T, cap>::getElemPoz(int poz) {
    return this->elem[poz];
}

template<class T, int cap>
int Lista<T, cap>::getSize() {
    return this->size;
}

template<class T, int cap>
void Lista<T, cap>::getAll() {
    for(int i = 0; i < this->size; i++)
        cout<<elem[i]<<" "<<endl;
}

template<class T, int cap>
int Lista<T, cap>::modify(T elemVechi, T elemNou) {
    for(int i = 0; i < this->size; i++) {
        if (this->elem[i] == elemVechi)
            this->elem[i] = elemNou;
        return  1;
    }
    return 0;
}

template<class T, int cap>
int Lista<T, cap>::searchName(const char* el) {
    for(int i = 0; i< this->size; i++)
        if(strcmp(this->elem[i].getName(), el)==0)
            return 1;
    return 0;
}

template<class T, int cap>
int Lista<T, cap>::searchId(const char *el) {
    for(int i = 0; i<this->size; i++)
        if(strcmp(this->elem[i].getId(), el) == 0)
            return 1;
    return 0;
}

template<class T, int cap>
int Lista<T, cap>::cautaElemPoz(int poz) {
    for(int i = 0; i < this->size; i++)
        if(elem[poz] == elem[i])
            return 1;
    return 0;
}


#endif //PROIECT_SDA_TAD_LISTA_H
