//
// Created by Carla Lazar on 30.05.2022.
//

#ifndef FRIEND_H_VALIDATOREXCEPTII_H
#define FRIEND_H_VALIDATOREXCEPTII_H
#include <vector>
#include<iostream>
using namespace std;

class ValidatorExceptii{
private:
    vector<string>message;
public:
    ValidatorExceptii(vector<string>msg)
    {
        message = msg;
    }
    vector<string> toString(){
        return message;
    }
};
#endif //FRIEND_H_VALIDATOREXCEPTII_H
