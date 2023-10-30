//
// Created by Carla Lazar on 02.05.2022.
//

#include "Friend.h"

#include<string.h>
Friend::Friend() {

    this->idUtilizator1 = nullptr;
    this->idUtilizator2 = nullptr;

}

Friend::Friend(const char *idUtilizator1,const char* idUtilizator2) {

    this->idUtilizator1 = new char[strlen(idUtilizator1)+1];
    strcpy(this->idUtilizator1, idUtilizator1);
    this->idUtilizator2 = new char[strlen(idUtilizator2)+1];
    strcpy(this->idUtilizator2, idUtilizator2);

}

Friend::Friend(const Friend &f) {

    this->idUtilizator1 = new char[strlen(f.idUtilizator1)+1];
    strcpy(this->idUtilizator1, f.idUtilizator1);
    this->idUtilizator2 = new char[strlen(f.idUtilizator2)+1];
    strcpy(this->idUtilizator2, f.idUtilizator2);
}
void Friend::setIdUtilizator1(const char* idUtilizator1) {

    if(this->idUtilizator1) delete[]this->idUtilizator1;
    this->idUtilizator1 = new char[strlen(idUtilizator1)+1];
    strcpy(this->idUtilizator1, idUtilizator1);

}

void Friend::setIdUtilizator2(const char* idUtilizator2) {

    if(idUtilizator2) delete[]this->idUtilizator2;
    this->idUtilizator2 = new char[strlen(idUtilizator2)+1];
    strcpy(this->idUtilizator2, idUtilizator2);

}

char* Friend::getIdUtlizator1() {
    return this->idUtilizator1;
}

char* Friend::getIdUtilizator2() {
    return this->idUtilizator2;
}


Friend &Friend::operator=(const Friend &f) {
    if(this != &f)
    {
        this->idUtilizator1 = new char[strlen(f.idUtilizator1)+1];
        strcpy(this->idUtilizator1, f.idUtilizator1);
        this->idUtilizator2 = new char[strlen(f.idUtilizator2)+1];
        strcpy(this->idUtilizator2, f.idUtilizator2);
    }
    return *this;

}

bool Friend::operator==(const Friend &f) {
    return strcmp(this->idUtilizator1, f.idUtilizator1)==0 && strcmp(this->idUtilizator2, f.idUtilizator2) == 0;
}

Friend::~Friend() {
    this->idUtilizator1 = nullptr;
    this->idUtilizator2 = nullptr;
}

ostream &operator<<(ostream &os, const Friend &f) {
    cout<<"Persoana cu id-ul: " <<f.idUtilizator1<<" "<<" are o relatie de prietenie cu persoana cu id-ul: "<<f.idUtilizator2;
    return os;
}

