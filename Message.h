//
// Created by Carla Lazar on 02.05.2022.
//

#ifndef PROIECT_SDA_MESSAGE_H
#define PROIECT_SDA_MESSAGE_H
#include<iostream>
#include "User.h"
#include<string.h>
using namespace std;

class Message {
private:
    char* sender;
    char* reciever;
    char* text;
public:
    ///constructorul
    Message();
    /// constructorul cu parametrii
    /// \param sender persoana care trimite mesajul, si este de tip User
    /// \param reciever persoana care primeste mesajul, care este tot  de tip User
    /// \param text textul pe care peroana il trimite
    Message(const char* sender, const char* reciever, const char* text);
    /// constructorul de copiere
    /// \param m variabila de tip message
    Message(Message& m);
    /// setter-ul pentru persoana care trimite mesajul
    /// \param sender
    void setSender(const char* sender);
    /// setter-ul pentru persoana care primeste mesajul
    /// \param reciever
    void setReciever(const char* reciever);
    /// setter-ul pentru text
    /// \param text
    void setText(const char* text);
    /// getter-ul pentru persoana care trimite mesajul
    /// \return
    char* getSender();
    /// getter-ul pentru persoana care primeste mesajul
    /// \return
    char* getReciever();
    /// getter-ul pentru mesaj
    /// \return
    char* getText();
    /// operatorul de atribuire
    /// \param m variabila de tipul message
    /// \return
    Message&operator=(const Message&m);
    /// operatorul ,,="
    /// \param m variabila de tipul message
    /// \return
    bool operator==(const Message& m);
    friend ostream&operator<<(ostream& os, const Message& m);
    ///destructorul
    ~Message();

};


#endif //PROIECT_SDA_MESSAGE_H
