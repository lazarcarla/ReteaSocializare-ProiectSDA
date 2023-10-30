//
// Created by Carla Lazar on 02.05.2022.
//

#include "User.h"
#include<string.h>
User::User() {
    this->id = 0;
    this->name = nullptr;
    this->birthYear = 0;
}

User::User(int id,const char* name,const char* firstName, int birthYear) {
    //this->id = new char[strlen(id) +1];
    //strcpy(this->id, id);
    this->id = id;
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);
    this->firstName = new char[strlen(firstName)+1];
    strcpy(this->firstName, firstName);
    this->birthYear = birthYear;
}

User::User(User &u) {
    //this->id = new char[strlen(u.id) +1];
    //strcpy(this->id, u.id);
    this->id = u.id;
    this->firstName = new char[strlen(u.firstName)+1];
    strcpy(this->firstName, u.firstName);
    this->name = new char[strlen(u.name)+1];
    strcpy(this->name, u.name);
    this->birthYear = u.birthYear;
}

void User::setId(int id) {
    //if(this->id) delete[] this->id;
    //this->id = new char[strlen(id) +1];
    //strcpy(this->id, id);
    this->id = id;
}
void User::setFirstName(const char *fname) {
    if(this->firstName) delete[] this->firstName;
    this->firstName = new char[strlen(fname)+1];
    strcpy(this->firstName, fname);
}
void User::setName(const char *name) {
    if(this->name) delete[] this->name;
    this->name = new char[strlen(name) +1];
    strcpy(this->name, name);
}

void User::setBirthYear(int birthYear) {
    this->birthYear = birthYear;
}

int User::getId() {
    return this->id;
}
char *User::getFirstName() {
    return this->firstName;
}
char *User::getName() {
    return this->name;
}

int User::getBirthYear() {
    return this->birthYear;
}

User &User::operator=(const User &user) {
    if (this != &user)
    {
        if (this->name) delete[]this->name;
        //if (this->id) delete[]this->id;
        if(this->firstName)delete[]this->firstName;
        this->birthYear = user.birthYear;
        this->id = user.id;
        this->name = new char[strlen(user.name) + 1];
        //this->id = new char[strlen(user.id) + 1];
        this->firstName = new char[strlen(user.firstName)+1];
        strcpy(this->name,  user.name);
        //strcpy(this->id, user.id);
        strcpy(this->firstName, user.firstName);
    }
    return *this;
}

bool User::operator==(const User &user) {
    return this->birthYear == user.birthYear && strcmp(this->name, user.name) == 0 && strcmp(this->firstName, user.firstName) && this->id == user.id;
}

User::~User() {
    this->id = 0;
    this->name = nullptr;
    this->firstName = nullptr;
    this->birthYear = 0;

}

ostream &operator<<(ostream &os, const User &user) {
    cout<<"Utilizator:~ID:"<<user.id<<" "<<", Nume: "<<user.name<<", Prenume: "<<user.firstName<<" "<<", Anul nasterii: "<<user.birthYear;
    return os;
}
