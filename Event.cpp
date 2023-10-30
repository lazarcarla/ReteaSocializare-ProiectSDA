//
// Created by Carla Lazar on 21.05.2022.
//

#include "Event.h"

Event::Event() {
    this->idUser = nullptr;
    this->name = "";
    this->date = "";
}

Event::Event(const char *idUser, string name, string date) {
    this->idUser = new char[strlen(idUser) +1];
    strcpy(this->idUser, idUser);
    this->name = name;
    this->date = date;
}

Event::Event(const Event &e) {
    this->idUser = new char[strlen(e.idUser) + 1];
    strcpy(this->idUser, e.idUser);
    this->name = e.name;
    this->date = e.date;
}

void Event::setIdUser(const char *idUser) {
    if(this->idUser) delete[] this->idUser;
    this->idUser = new char[strlen(idUser)+1];
    strcpy(this->idUser, idUser);
}

void Event::setName(string name) {
    this->name = name;
}

void Event::setDate(string date) {
    this->date = date;
}

const char *Event::getIdUser() {
    return this->idUser;
}

string Event::getName() {
    return this->name;
}

string Event::getDate() {
    return this->date;
}

Event &Event::operator=(const Event &e) {
    if (this != &e)
    {
        if (this->idUser) delete[]this->idUser;
        this->idUser = e.idUser;
        strcpy(this->idUser,  e.idUser);
        this->name = e.name;
        this->date = e.date;
    }
    return *this;
}

bool Event::operator==(const Event &e) {
    return strcmp(this->idUser, e.idUser) == 0 && this->name == e.name && this->date == e.date;
}

ostream &operator<<(ostream &os, const Event &e) {
    cout<<"Utilizatorul cu id-ul "<< e.idUser<<" participa la evenimentul cu numele: "<< e.name<<" care va avea loc in data de "<<e.date<<endl;
    return os;
}

Event::~Event() {

}
