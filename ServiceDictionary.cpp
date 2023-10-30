//
// Created by Carla Lazar on 24.05.2022.
//

#include "ServiceDictionary.h"
#include "Lista.h"
#include "Node.h"
#include <vector>
using namespace std;
ServiceDictionary::ServiceDictionary() {

}
ServiceDictionary::ServiceDictionary(Dictionary<int, User>& u){
    this->user = u;

}
void ServiceDictionary::addUser(int idUser, const char* nume,const char* firstName, int birthYear, int poz)throw(RepoValidator, ValidatorExceptii) {
    User user(idUser, nume,firstName, birthYear);

    Node<int, User> *node = new Node<int, User>(poz, user);
    valid.validatorUser(& user);
    this->user.put(node->key, node->value);
  //  this->user.getAll();

}


void ServiceDictionary::removeUser(int poz) {
    this->user.remove(poz);
}

void ServiceDictionary::getAllUser() {
    this->user.getAll();
}

int ServiceDictionary::getSizeUser() {
    return this->user.getSize();
}
ServiceDictionary::~ServiceDictionary() {

}


