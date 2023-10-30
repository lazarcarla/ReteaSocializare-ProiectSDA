//
// Created by Carla Lazar on 30.05.2022.
//

#ifndef FRIEND_H_VALIDATOR_H
#define FRIEND_H_VALIDATOR_H
#include "User.h"
#include "Friend.h"
#include "Message.h"
#include "Event.h"
#include "ValidatorExceptii.h"
class Validator {
public:
    Validator();
    ~Validator();

    void validatorUser(User* u) throw(ValidatorExceptii);
    void validatorFriend(Friend* f)throw(ValidatorExceptii);
    void validatorMessage(Message* m)throw(ValidatorExceptii);
    void validatorEvent(Event* e)throw(ValidatorExceptii);
};


#endif //FRIEND_H_VALIDATOR_H
