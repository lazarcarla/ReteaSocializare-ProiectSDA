//
// Created by Carla Lazar on 30.05.2022.
//

#ifndef FRIEND_H_REPOVALIDATOR_H
#define FRIEND_H_REPOVALIDATOR_H

#include <iostream>
#include <exception>
using namespace std;
class RepoValidator: public runtime_error{
private:
    const char* message;
public:
    RepoValidator(const char* m) : runtime_error(m), message(m)
    {}
    const char* getMessage(){
        return message;
    }
};


#endif //FRIEND_H_REPOVALIDATOR_H
