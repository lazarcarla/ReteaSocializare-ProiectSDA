//
// Created by Carla Lazar on 24.05.2022.
//

#ifndef FRIEND_H_SERVICEDICTIONARY_H
#define FRIEND_H_SERVICEDICTIONARY_H
#include "User.h"
#include "Dictionary.h"
#include "Friend.h"
#include "Event.h"
#include "Message.h"
#include "Validator.h"
#include "ValidatorExceptii.h"
#include "RepoValidator.h"
#include<iostream>
using namespace std;

class ServiceDictionary {
private:
    Dictionary<int, User>user;
    Validator valid;

public:
    ServiceDictionary();
    ServiceDictionary(Dictionary<int, User>& u);
    void addUser(int idUser, const char* nume,const char* firstName,  int birthYear,int poz) throw(RepoValidator, ValidatorExceptii);
    void removeUser(int poz);

    int getSizeUser();
    void getAllUser();
    ~ServiceDictionary();
};


#endif //FRIEND_H_SERVICEDICTIONARY_H
