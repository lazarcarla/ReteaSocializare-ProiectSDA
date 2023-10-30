//
// Created by Carla Lazar on 21.05.2022.
//

#ifndef FRIEND_H_SERVICELISTA_H
#define FRIEND_H_SERVICELISTA_H
#include<vector>
#include "Lista.h"
#include "User.h"
#include "Message.h"
#include "Friend.h"
#include "Event.h"
#include "ValidatorExceptii.h"
#include "RepoValidator.h"
#include "Validator.h"
#include<iostream>
#include<string>
using namespace std;
class ServiceLista {
private:
    Lista<User, 1000>user;
    Lista<Friend, 1000>fri;
    Lista<Message, 1000>message;
    Lista<Event, 1000>event;
    Validator valid;
public:
    ServiceLista();
    ServiceLista(Lista<User, 1000>& u);
    ServiceLista(Lista<Friend, 1000>& f);
    ServiceLista(Lista<Message, 1000>& m);
    ServiceLista(Lista<Event, 1000>& e);

    void addUser(int id,const char* name,const char*firstName, int birthYear) throw(RepoValidator, ValidatorExceptii);
    void addFriend(const char* idUtilizator1, const char* idUtilizator2) throw(RepoValidator, ValidatorExceptii);
    void addMessage(const char* sender, const char* reciever, const char* text) throw(RepoValidator, ValidatorExceptii);
    void addEvent(const char* idUser, string name, string date) throw(RepoValidator, ValidatorExceptii);
    void delUser(int poz) throw(RepoValidator, ValidatorExceptii);
    void delFriend(int poz) throw(RepoValidator, ValidatorExceptii);
    void delMessage(int poz) throw(RepoValidator, ValidatorExceptii);
    void delEvent(int poz) throw(RepoValidator, ValidatorExceptii);
    int updateUser(int idVechi, const char *nameVechi,const char* prenumeVech, int birthYearVechi, int idNou, const char* nameNou,const char* prenumeNou, int birthYearNou) throw(RepoValidator, ValidatorExceptii);

    void getAllUser();
    void getAllFriend();
    void getAllMessage();
    void getAllEvent();

    int getSizeUser();
    int getSizeFriend();
    int getSizeMessage();
    int getSizeEvent();

    ~ServiceLista();
    
};


#endif //FRIEND_H_SERVICELISTA_H
