//
// Created by Carla Lazar on 23.05.2022.
//

#ifndef FRIEND_H_USERINTERFACE_H
#define FRIEND_H_USERINTERFACE_H
#include "ServiceLista.h"
#include "User.h"
#include "Friend.h"
#include "Message.h"
#include "Event.h"
#include "ServiceDictionary.h"
#include <exception>
#include "RepoValidator.h"
#include "ValidatorExceptii.h"
#include "Validator.h"
class UserInterface {
private:
    ServiceLista service;
    ServiceDictionary serviceD;
    void addUser();
    void addFriend();
    void addMessage();
    void addEvent();

    void delUser();
    void delFriend();
    void delMessage();
    void delEvent();

    int updateUser();
    void getAllUsers();
    void getAllFriends();
    void getAllMessages();
    void getAllEvents();

    void addUserDictionary();
    void getAllUserDictionary();
    int getSizeUser();
    void removeUserDictionary();



public:
    UserInterface();
    UserInterface(ServiceLista& s, ServiceDictionary& sd);
    //UserInterface(ServiceDictionary& sd);
    void runMenu();
    ~UserInterface();
};


#endif //FRIEND_H_USERINTERFACE_H
