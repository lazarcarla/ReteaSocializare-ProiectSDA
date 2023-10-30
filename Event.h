//
// Created by Carla Lazar on 21.05.2022.
//

#ifndef FRIEND_H_EVENT_H
#define FRIEND_H_EVENT_H

#include<string>
#include <iostream>
using namespace std;

class Event {
private:
    char* idUser;
    string name;
    string date;
public:
    ///constructorul fara parametrii
    Event();
    /// constructorul cu paramentii
    /// \param idUser id-ul userului care participa la eveniment
    /// \param name Numele evenimentului
    /// \param date data in care are loc evenimentul
    Event(const char* idUser, string name, string date);
    /// constructorul de copiere
    /// \param e
    Event(const Event& e);
    /// setter-ul pentru idUser
    /// \param idUser
    void setIdUser(const char* idUser);
    /// stter-ul pentru nume
    /// \param name
    void setName(string name);
    /// setter ul pentru date
    /// \param date
    void setDate(string date);
    /// getter-ul pentru id-utilizator
    /// \return id-ul utilizatorului
    const char* getIdUser();
    /// setter-ul pentru nume
    /// \return numele evenimentului
    string getName();
    /// getter-ul pentru data
    /// \return data in care are loc evenimentul
    string getDate();
    /// functie pentru operatorul de atribuire
    /// \param e variabila de tipul Event
    /// \return
    Event& operator =(const Event& e);
    /// functie pentru operatorul de egalitate
    /// \param e Variabila de tipul Event
    /// \return
    bool operator == (const Event& e);
    /// op pentru iesirea din conssola
    /// \param os
    /// \param e variablia de tipul event
    /// \return
    friend ostream&operator<<(ostream& os, const Event& e);
    ~Event();

};


#endif //FRIEND_H_EVENT_H
