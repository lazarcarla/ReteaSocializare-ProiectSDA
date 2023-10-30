//
// Created by Carla Lazar on 21.05.2022.
//

#ifndef FRIEND_H_DICTIONARY_H
#define FRIEND_H_DICTIONARY_H
#include "Node.h"
#include<iostream>
using namespace std;

template<class K, class V>
class Dictionary {
private:
   // Node<K, V> *first;
    int size;


public:
    Node<K, V> *first;
    Dictionary() {
        this->first = nullptr;
        this->size =0;
    }

    void put(K key, V value) {

        if (first == nullptr) {
            first = new Node<K, V>(key, value);
            this->size++;

        } else {
            Node<K, V> *p = first;
            while (p->next != nullptr && p->key != key) {
                p = p->next;

            }
            if (p->key == key)
            {
                p->value = value;

            }
            else {
                p->next = new Node<K, V>(key, value);
                this->size++;
            }
        }
       // this->size++;
    }

    V cauta(K key){
        Node<K,V>*p = first;
        while(p!= nullptr) {
            if (p->key == key)
                return p->value;
            p = p->next;
        }
        return {};
    }

    int remove(K key){
        Node<K, V>* curr = first;
        Node<K,V>* prev = nullptr;
        while (curr->next != nullptr){
            if(curr->key == key){
                if(prev == nullptr){
                    first = curr->next;
                }
                else{
                    prev->next = curr->next;
                }
                delete curr;
                this->size--;

            }
            prev = curr;
            curr = curr->next;
        }

    }

    int getSize(){
        return this->size;
    }

    void getAll(){
        Node<K,V>* p =first;
        while(p!= nullptr){
            cout<<p->key<<" "<<p->value<<endl;
            p = p->next;
        }
    }


};


#endif //FRIEND_H_DICTIONARY_H
