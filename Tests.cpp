//
// Created by Carla Lazar on 03.05.2022.
//

#include "Tests.h"
#include "Event.h"
#include "Friend.h"
#include "ServiceLista.h"
#include "Message.h"
#include "User.h"
#include "Dictionary.h"
Tests::Tests() {
    this->testLista();
    this->testUser();
    this->testEvent();
    this->testFriend();
    this->testMessage();
    this->testServiceLista();
    cout<<"Testele au rulat cu succes!";
}

void Tests::testUser() {
    User u;
    assert(u.getName() == nullptr);
    assert(u.getFirstName() == nullptr);
    assert(u.getId() == 0);
    assert(u.getBirthYear() == 0);

    User u1(1 ,"Lazar","Carla", 2002);
    assert(u1.getId() == 1);
    assert(strcmp(u1.getName(),"Lazar") == 0);
    assert(strcmp(u1.getFirstName(),"Carla") == 0);
    assert(u1.getBirthYear() == 2002);
}

void Tests::testLista() {
    User u1(1, "Lazar","Carla", 2002);
    assert(u1.getId() == 1);
    assert(strcmp(u1.getName(),"Lazar") == 0);
    assert(strcmp(u1.getFirstName(),"Carla") == 0);
    assert(u1.getBirthYear() == 2002);

    User u2(2,"Pop", "Laura", 2000);
    assert(u2.getId() == 2);
    assert(strcmp(u2.getName(),"Pop") == 0);
    assert(strcmp(u2.getFirstName(),"Laura") == 0);

    assert(u2.getBirthYear() == 2000);

    Lista<User, 10>l;
    l.addElem(u1);
    l.addElem(u2);
    assert(l.getSize() == 2);

    l.modify(u1, u2);


}

void Tests::testFriend() {
    Friend f("1", "2");
    assert(strcmp(f.getIdUtlizator1(), "1") == 0);
    assert(strcmp(f.getIdUtilizator2(), "2") == 0);
}

void Tests::testEvent() {

    Event e("1", "Carrousel", "12.01.2021");
    assert(strcmp(e.getIdUser(), "1") == 0);
    assert(e.getName() == "Carrousel");
    assert(e.getDate() == "12.01.2021");
}

void Tests::testMessage() {
    Message m("Carla", "Maria", "Ce faci?");
    assert(strcmp(m.getSender(),"Carla")==0);
    assert(strcmp(m.getReciever(),"Maria")==0);
    assert(strcmp(m.getText(),"Ce faci?")==0);
}

void Tests::testServiceLista() {
    ServiceLista s;
    s.addUser(1,"Lazar", "Carla", 2002);
    s.addUser(2,"Pop", "Maria", 2000);

    assert(s.getSizeUser() == 2);
    s.delUser(0);
    s.delUser(1);


    s.updateUser(2,"Pop", "Maria", 2000, 3,"Lazea", "Carmen", 2001);

}

void Tests::testDictionar() {
    User u(1, "Lazar", "Carla", 2002);
    Dictionary<int, User>d;
    d.put(1, u);
    assert(d.getSize() == 1);

}
