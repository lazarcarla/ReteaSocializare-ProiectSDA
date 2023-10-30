//
// Created by Carla Lazar on 21.05.2022.
//

#ifndef FRIEND_H_NODE_H
#define FRIEND_H_NODE_H

template <class K, class V>
        class Dictionary;
template<class K, class V>
class Node {
private:
   // K key;
    //V value;
  //  Node<K,V>* next;
public:
    K key;
    V value;
    Node<K,V>* next;
    Node<K,V>* previos;
    Node(K key, V value): key(key), value(value){this->next = nullptr; this->previos = nullptr;}
    friend class Dictionary<K,V>;


};


#endif //FRIEND_H_NODE_H
