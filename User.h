//
// Created by Carla Lazar on 02.05.2022.
//

#ifndef PROIECT_SDA_USER_H
#define PROIECT_SDA_USER_H
#include<iostream>
using namespace std;

class User {
private:
    int id;
    char* firstName;
    char* name;
    int birthYear;
public:
    ///constructorul
    User();
    /// constructorul cu parametrii
    /// \param id id-ul utilizatorului
    /// \param name numele uttilizatorului
    /// \param birthYear anul nasterii
    User(int id,const char* name,const char* firstName, int birthYear);
    /// constructorul de copiere
    /// \param u o variabila de tipul User
    User(User& u);
    /// setter-ul pentru id
    /// \param id
    void setId(int id);
    /// setter-ul pentru prenume
    /// \param fname
    void setFirstName(const char* fname);
    /// setter-ul pentru nume
    /// \param name
    void setName(const char* name);
    /// setter-ul pentru anul nasterii
    /// \param birthYear
    void setBirthYear(int birthYear);
    /// getter-ul pt id
    /// \return id-ul
    int getId();
    /// getter-ul pentru prenume
    /// \return
    char* getFirstName();
    /// getter-ul pentru nume
    /// \return numele
    char* getName();
    /// getter-ul pentru anul nasterii
    /// \return anul nasterii
    int getBirthYear();
    /// functie pentru operatorul de atribuire
    /// \param user obiect de tipul User
    /// \return
    User& operator = (const User& user);
    /// functie pentru operatorul de egalitate
    /// \param user obiect de tipul User
    /// \return
    bool operator==(const User& user);

    /// op pentru iesirea din conssola
    /// \param os
    /// \param user obiect de tipul user
    /// \return
    friend ostream&operator<<(ostream& os, const User& user);

    ///destructorul
    ~User();
};


#endif //PROIECT_SDA_USER_H
