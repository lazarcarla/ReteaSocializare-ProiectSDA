//
// Created by Carla Lazar on 21.05.2022.
//

#include "ServiceLista.h"

ServiceLista::ServiceLista() {

}

ServiceLista::ServiceLista(Lista<User, 1000>& u) {
    this->user= u;
}

ServiceLista::ServiceLista(Lista<Friend, 1000>& f) {
    this->fri = f;
}

ServiceLista::ServiceLista(Lista<Message, 1000>& m) {
    this->message = m;
}

ServiceLista::ServiceLista(Lista<Event, 1000>& e) {
    this->event = e;
}

void ServiceLista::addUser(int id, const char *name,const char*firstName, int birthYear) throw(RepoValidator, ValidatorExceptii) {
    User u1(id, name,firstName, birthYear);
    valid.validatorUser(& u1);
    this->user.addElem(u1);
}

void ServiceLista::addFriend(const char *idUtilizator1, const char *idUtilizator2) throw(RepoValidator, ValidatorExceptii) {
   // if(this->user.searchId(idUtilizator1) == 1)
     //   cout<<"Nu exita un utilizator cu id-ul dat!"<<endl;
    //if(this->user.searchId(idUtilizator2) == 1)
      //  cout<<"Nu exista niciun utilizator cu id-ul dat!"<<endl;
    //else {

        Friend f1(idUtilizator1, idUtilizator2);
        valid.validatorFriend(& f1);
        this->fri.addElem(f1);
    //}
}

void ServiceLista::addMessage(const char *sender, const char *reciever, const char *text) throw(RepoValidator, ValidatorExceptii) {
    if(this->user.searchName(sender) == 1)
        cout << "Nu exista un utilizator cu numele dat pentru a trimite un mesaj!"<<endl;
    if(this->user.searchName(reciever) ==1)
        cout<<"Nu exista un utilizator cu numele dat!"<<endl;
    else {
        Message m1(sender, reciever, text);
        valid.validatorMessage(& m1);
        this->message.addElem(m1);
    }
}

void ServiceLista::addEvent(const char *idUser, string name, string date) throw(RepoValidator, ValidatorExceptii) {
    Event e1(idUser, name, date);
    valid.validatorEvent(& e1);
    this->event.addElem(e1);
}

void ServiceLista::delUser(int poz) throw(RepoValidator, ValidatorExceptii) {
    if(this->user.getSize() == 0)
    {
        cout<<"Nu exista useri adaugati, deci nu se poate realiza stegerea!";
    }
    else
        this->user.deleteElem(poz) ;


}

void ServiceLista::delFriend(int poz) throw(RepoValidator, ValidatorExceptii) {
    if(this->fri.getSize() == 0) {
        cout << "Nu exista prietenii adaugate, deci nu se poate realiza stergerea!";
    }
    else
        this->fri.deleteElem(poz);


}

void ServiceLista::delMessage(int poz) throw(RepoValidator, ValidatorExceptii) {
    if(this->message.getSize() == 0)
    {
        cout<<"Nu exista mesaje adaugate, deci nu se poate realiza stergerea!";
    }
    else
        this->message.deleteElem(poz);
}

void ServiceLista::delEvent(int poz)  throw(RepoValidator, ValidatorExceptii){
    if(this->event.getSize() == 0){
        cout<<"Nu exista evenimente adaugate, deci nu se poate excuta stergerea!";
    }
    else
        this->event.deleteElem(poz);
}

int ServiceLista::updateUser(int idVechi, const char *nameVechi,const char*prenumeVechi, int birthYearVechi,
                             int idNou, const char* nameNou,const char*prenumeNou ,int birthYearNou)  throw(RepoValidator, ValidatorExceptii){
    User uV(idVechi, nameVechi,prenumeVechi, birthYearVechi);
    User uN(idNou, nameNou, prenumeNou, birthYearNou);
    return this->user.modify(uV, uN);
}

void ServiceLista::getAllUser() {
    this->user.getAll();
}

void ServiceLista::getAllFriend() {
    this->fri.getAll();
}

void ServiceLista::getAllMessage() {
    this->message.getAll();
}

void ServiceLista::getAllEvent() {
    this->event.getAll();
}

ServiceLista::~ServiceLista() {

}

int ServiceLista::getSizeUser() {
    return this->user.getSize();
}

int ServiceLista::getSizeFriend() {
    return this->fri.getSize();
}

int ServiceLista::getSizeMessage() {
    return this->message.getSize();
}

int ServiceLista::getSizeEvent() {
    return this->event.getSize();
}
