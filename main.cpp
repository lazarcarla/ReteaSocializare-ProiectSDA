#include <iostream>
#include "Lista.h"
#include "Message.h"
#include "User.h"
#include "Friend.h"
#include "Tests.h"
#include "Event.h"
#include "Dictionary.h"
#include "UserInterface.h"
#include "Node.h"
#include<iostream>
using namespace std;

int main() {
    Tests tests;
    cout<<endl;


    User u(1, "Lazar","Carla", 2002);
    User u1(2,"Pop", "Dana", 2000);
    User u2(3,"Ivanescu", "Maria", 2002);
    User u3(4, "Bulzan","Elena", 2003);
    User u4(5,"Prigoana", "Dan", 2000);
    User u5(6, "Moldovan","Claudiu", 20006);
    User u6(7,"Morarescu", "Andrada", 1990);
    User u7(8,"Lazea", "Dana", 2000);
    User u8(9,"Chis", "Maria", 2002);
    User u9(10,"Turdean", "Elena", 2003);
    User u10(11, "Popescu","Dan", 2000);
    User u11(12,"Mircea",  "Claudiu", 20006);
    User u12(13,"Stefan", "Andrada", 1990);
    User u13(14,"Popa", "Dana", 2000);
    User u14(15,"Goia", "Maria", 2002);
    User u15(16,"Gabrian", "Elena", 2003);

    Node<int, User>* node = new Node<int, User>(1, u);
    Node<int, User>* node1 = new Node<int, User>(2, u1);
    Node<int, User>* node2 = new Node<int, User>(3, u2);
    Node<int, User>* node3 = new Node<int, User>(4, u3);
    Node<int, User>* node4 = new Node<int, User>(5, u4);
    Node<int, User>* node5 = new Node<int, User>(6, u5);
    Node<int, User>* node6 = new Node<int, User>(7, u6);
    Node<int, User>* node7 = new Node<int, User>(8, u7);
    Node<int, User>* node8 = new Node<int, User>(9, u8);
    Node<int, User>* node9 = new Node<int, User>(10, u9);
    Node<int, User>* node10 = new Node<int, User>(11, u10);
    Node<int, User>* node11 = new Node<int, User>(12, u11);
    Node<int, User>* node12 = new Node<int, User>(13, u12);
    Node<int, User>* node13 = new Node<int, User>(14, u13);
    Node<int, User>* node14 = new Node<int, User>(15, u14);
    Node<int, User>* node15 = new Node<int, User>(16, u15);

    Dictionary<int, User>d1;
    d1.put(node->key, node->value);
    d1.put(node1->key, node1->value);
    d1.put(node2->key, node2->value);
    d1.put(node3->key, node3->value);
    d1.put(node4->key, node4->value);
    d1.put(node5->key, node5->value);
    d1.put(node6->key, node6->value);
    d1.put(node7->key, node7->value);
    d1.put(node8->key, node8->value);
    d1.put(node9->key, node9->value);
    d1.put(node10->key, node10->value);
    d1.put(node11->key, node11->value);
    d1.put(node12->key, node12->value);
    d1.put(node13->key, node13->value);
    d1.put(node14->key, node14->value);
    d1.put(node15->key, node15->value);
    d1.getAll();
    cout<<endl;
    //d1.remove(node1->key);
    //d1.getAll();
    //cout<<endl;


    Lista<Friend, 100>fr;
    Friend f("1", "2");
    Friend f1("2", "3");
    Friend f2("1", "4");
    Friend f3("2", "4");
    Friend f4("3", "1");
    Friend f5("3", "7");
    Friend f6("4", "2");
    Friend f7("4", "8");
    Friend f8("5", "13");
    Friend f9("5", "15");
    Friend f10("6", "11");
    Friend f11("6", "7");
    Friend f12("7", "1");
    Friend f13("7", "3");
    Friend f14("8", "4");
    Friend f15("8", "10");
    Friend f16("9", "12");
    Friend f17("9", "7");
    Friend f18("10", "2");
    Friend f19("10", "3");
    Friend f20("11", "4");
    Friend f21("11", "10");
    Friend f22("12", "1");
    Friend f23("12", "2");
    Friend f24("13", "2");
    Friend f25("13", "3");
    Friend f26("14", "10");
    Friend f27("14", "5");
    Friend f28("15", "6");
    Friend f29("15", "8");


    fr.addElem(f);
    fr.addElem(f1);
    fr.addElem(f2);
    fr.addElem(f3);
    fr.addElem(f4);
    fr.addElem(f5);
    fr.addElem(f6);
    fr.addElem(f7);
    fr.addElem(f8);
    fr.addElem(f9);
    fr.addElem(f10);
    fr.addElem(f11);
    fr.addElem(f12);
    fr.addElem(f13);
    fr.addElem(f14);
    fr.addElem(f15);
    fr.addElem(f16);
    fr.addElem(f17);
    fr.addElem(f18);
    fr.addElem(f19);
    fr.addElem(f20);
    fr.addElem(f21);
    fr.addElem(f22);
    fr.addElem(f23);
    fr.addElem(f24);
    fr.addElem(f25);
    fr.addElem(f26);
    fr.addElem(f27);
    fr.addElem(f28);
    fr.addElem(f29);
    fr.getAll();
    cout<<endl;

    Lista<Message, 20>m;
    Message m1("Dana", "Maria", "Ce faci?");
    Message m2("Carla", "Maria", "Salut");
    Message m3("Maria", "Claudiu", "Buna ziua");
    Message m4("Elena", "Dan", "Hello");
    Message m5("Andrada", "Carla", "cf");
    Message m6("Dan", "Dana", "Ce faci?");
    Message m7("Maria", "Dan", "bUNA");
    Message m8("Carla", "Dana", "Ce faci?");
    Message m9("Andrada", "Claudiu", "Servus");
    Message m10("Elena", "Maria", "Hai afara!");
    Message m11("Claudiu", "Carla", "Ce faci?");
    Message m12("Dana", "Claudiu", "Esti bine?");
    Message m13("Andrada", "Elena", "Ce faci?");
    Message m14("Maria", "Carla", "Ce faci?");
    Message m15("Dan", "Elena", "Ce faci?");
    m.addElem(m1);
    m.addElem(m2);
    m.addElem(m3);
    m.addElem(m4);
    m.addElem(m5);
    m.addElem(m6);
    m.addElem(m7);
    m.addElem(m8);
    m.addElem(m9);
    m.addElem(m10);
    m.addElem(m11);
    m.addElem(m12);
    m.addElem(m13);
    m.addElem(m14);
    m.addElem(m15);

    m.getAll();
    cout<<endl;

    Lista<Event, 10>e;
    Event e1("1", "Carrousel", "12.02.2021");

    e.addElem(e1);
    e.getAll();
    cout<<endl;


    UserInterface ui;
    ui.runMenu();
    return 0;
}
