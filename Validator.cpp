//
// Created by Carla Lazar on 30.05.2022.
//

#include "Validator.h"
#include<vector>
#include<iostream>
using namespace std;

Validator::Validator() {

}

Validator::~Validator() {

}

void Validator::validatorUser(User *u)throw(ValidatorExceptii) {
    vector<string> mess;
    if(u->getId() == 0) {
        mess.push_back("Id-ul nu poate sa fie camp gol!");
    }
    if(u->getName() == nullptr) {
        mess.push_back("Numele nu poate sa fie camp gol!");
    }
    if(u->getFirstName() == nullptr){
        mess.push_back("Numele nu poate sa fie gol!");
    }
    if(u->getBirthYear() < 1900 || u->getBirthYear()>2022) {
        mess.push_back("Anul nasterii este introdus gresit!");
    }

    if(mess.size() > 0)
        throw ValidatorExceptii(mess);
}

void Validator::validatorFriend(Friend *f) throw(ValidatorExceptii){
    vector<string> mess;
    if(strcmp(f->getIdUtlizator1(),f->getIdUtilizator2() )== 0)
        mess.push_back("Cele doua id-uri trebuie sa fie diferite!");

    if(mess.size() > 0)
        throw ValidatorExceptii(mess);

}

void Validator::validatorMessage(Message *m) throw(ValidatorExceptii){
    vector<string>mess;
    if(m->getSender() == nullptr)
        mess.push_back("Campul numelui persoanei care trimite mesajul nu poate sa fie gol!");
    if(m->getReciever() == nullptr)
        mess.push_back("Campul numelui persoanei care primeste mesajul nu poate sa fie gol!");
    if(m->getText() == nullptr)
        mess.push_back("Campul textului nu poate sa fie gol!");
    if(strcmp(m->getSender() , m->getReciever())==0)
        mess.push_back("Cele doua nume trebuie sa fie diferite!");
    if(mess.size() > 0)
        throw ValidatorExceptii(mess);
}

void Validator::validatorEvent(Event *e) throw(ValidatorExceptii){
    vector<string>mess;
    if(e->getIdUser() == nullptr)
        mess.push_back("Id-ul nu poate sa fie gol!");
    if(e->getName() == "")
        mess.push_back("Campul numelui nu poate sa fie gol!");
    if(e->getDate() == "")
        mess.push_back("Data nu poate sa fie goala!");
    if(mess.size() > 0)
        throw ValidatorExceptii(mess);
}
