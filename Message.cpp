//
// Created by Carla Lazar on 02.05.2022.
//

#include "Message.h"
#include<string.h>
Message::Message() {
    this->text = nullptr;
    this->sender = nullptr;
    this->reciever = nullptr;
}

Message::Message(const char* sender, const char* reciever, const char* text) {
    this->sender = new char[strlen(sender)+1];
    strcpy(this->sender, sender);
    this->reciever = new char[strlen(reciever)+1];
    strcpy(this->reciever, reciever);
    this->text = new char[strlen(text)+1];
    strcpy(this->text, text);

}

Message::Message(Message &m) {
    this->sender = new char[strlen(m.sender)+1];
    strcpy(this->sender , m.sender);
    this->reciever = new char[strlen(m.reciever)+1];
    strcpy(this->reciever , m.reciever);
    this->text = new char[strlen(m.text)+1];
    strcpy(this->text , m.text);
}

void Message::setSender(const char* sender) {
    if(this->sender) delete[]this->sender;
    this->sender = new char[strlen(sender) + 1];
    strcpy(this->sender, sender);
}

void Message::setReciever(const char* reciever) {
    if(this->reciever) delete[]this->reciever;
    this->reciever = new char[strlen(reciever) + 1];
    strcpy(this->reciever, reciever);
}

void Message::setText(const char *text) {
    if(this->text) delete[] this->text;
    this->text = new char[strlen(text) +1];
    strcpy(this->text, text);
}

char* Message::getSender() {
    return this->sender;
}

char* Message::getReciever() {
    return this->reciever;
}

char *Message::getText() {
    return this->text;
}

Message &Message::operator=(const Message &m) {
    if (this != &m)
    {
        if(this->sender) delete[]this->sender;
        this->sender = new char[strlen(m.sender) + 1];
        strcpy(this->sender, m.sender);

        if(this->reciever)delete[]this->reciever;
        this->reciever = new char[strlen(m.reciever) + 1];
        strcpy(this->reciever, m.reciever);

        if (this->text)
            delete[]this->text;
        this->text = new char [strlen(m.text) + 1];
        strcpy(this->text, m.text);
    }
    return *this;
}

bool Message::operator==(const Message &m) {
    return this->reciever == m.reciever && this->sender == m.sender
    && this->text == m.text;
}

ostream &operator<<(ostream &os, const Message &m) {
    cout<<m.sender<<" "<<"i-a trimis lui "<<m.reciever<<" "<<"mesajul "<<m.text;
    return os;}

Message::~Message() {

}

