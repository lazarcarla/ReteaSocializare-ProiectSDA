//
// Created by Carla Lazar on 23.05.2022.
//

#include "UserInterface.h"
#include<vector>
void UserInterface::addUser() {
    try{
        cout<<"Dati id-ul utilizatorului:";
        int idUser;
        cin>>idUser;
        cout<<endl;
        cout<<"Dati numele de familie utilizatorului: ";
        char* nume = new char[100];
        cin>>nume;
        cout<<endl;
        cout<<"Dati prenumele utilizatorului: ";
        char* prenume = new char[10];
        cin>>prenume;
        cout<<endl;
        cout<<"Dati anul de nastere al utilizatorului: ";
        int year;
        cin>>year;
        cout<<endl;

        this->service.addUser(idUser, nume,prenume, year);
        delete[]prenume;
        delete[]nume;
    }
    catch (RepoValidator& e){
        cout<<e.what()<<endl;
    }
    catch(ValidatorExceptii& e){
        vector<string>elems = e.toString();
        for(auto i =0; i<elems.size(); i++)
        {
            cout<<elems[i]<<" "<<endl;
        }
    }
    catch(const char* ex){
        cout<<ex<<endl;
    }
}

void UserInterface::addFriend() {
    try{
        cout<<"Dati id-ul primului utilizator: ";
         char* idUtilizator1 = new char[100];
        cin>>idUtilizator1;
        cout<<endl;
        cout<<"Dati id-ul celui de-al doilea utilizator cu care primul are o relatie de prietenie: ";
        char* idUtilizator2 = new char[100];
        cin>>idUtilizator2;
        cout<<endl;
        this->service.addFriend(idUtilizator1, idUtilizator2);
        delete[]idUtilizator2;
        delete[]idUtilizator1;
    }
    catch (RepoValidator& e)
    {
        cout<<e.what()<<endl;
    }
    catch (ValidatorExceptii& e)
    {
        vector<string>elems = e.toString();
        for(auto i = 0 ;i< elems.size(); i++)
        {
            cout<<elems[i]<<" "<<endl;
        }
    }
    catch(const char* ex){
        cout<<ex<<endl;
    }
}

void UserInterface::addMessage() {
    try {
        cout << "Dati numele celui care doreste sa trimita mesajul: ";
        char *sender = new char[100];
        cin >> sender;
        cout << endl;
        cout << "Dati numele celui care primeste mesajul: ";
        char *reciever = new char[100];
        cin >> reciever;
        cout << endl;
        cout << "Dati mesajul text pe care doreste utlizatorul sa-l trimita: ";
        char *text = new char[100];
        cin >> text;
        cout << endl;
        this->service.addMessage(sender, reciever, text);
        delete[]text;
        delete[]reciever;
        delete[]sender;
    }
    catch (RepoValidator& e){
        cout<<e.what()<<endl;
    }
    catch(ValidatorExceptii& e){
        vector<string>elems = e.toString();
        for(auto i = 0 ;i<elems.size(); i++) {
            cout << elems[i] << " " << endl;
        }
    }
    catch(const char* ex){
        cout<<ex<<endl;
    }

}

void UserInterface::addEvent() {
    try {
        cout << "Dati id-ul utilizatorului care doreste sa participe la eveniment: ";
        char *id = new char[100];
        cin >> id;
        cout << endl;

        cout << "Dati numele evenimenului:";
        string nume;
        cin >> nume;
        cout << endl;

        cout << "Dati data in care are loc evenimenul(zi/luna/an):";
        string data;
        cin >> data;
        cout << endl;

        this->service.addEvent(id, nume, data);
    }
    catch(RepoValidator& e)
    {
        cout<<e.what()<<""<<endl;

    }
    catch(ValidatorExceptii& e){
        vector<string>elems = e.toString();
        for(auto i =0; i<elems.size(); i++)
        {
            cout<<elems[i]<<" "<<endl;
        }
    }
    catch(const char* ex){
        cout<<ex<<endl;
    }
}

void UserInterface::delUser() {
    try {
        cout << "Dati pozitia de unde vreti sa stergeti utilizatorul:";
        int poz;
        cin >> poz;
        this->service.delUser(poz);

        cout << endl;
    }
    catch (RepoValidator& e){
        cout<<e.what()<<endl;
    }
    catch(const char* ex){
        cout<<ex<<endl;
    }
}

void UserInterface::delFriend() {
    try {
        cout << "Dati pozitia de unde vreti sa stergeti prietenia:";
        int poz;
        cin >> poz;
        this->service.delFriend(poz);

        cout << endl;
    }
    catch(RepoValidator& e){
        cout<<e.what()<<endl;
    }
}

void UserInterface::delMessage() {
    try {
        cout << "Dati pozitia de unde vreti sa stergeti mesajul:";
        int poz;
        cin >> poz;

        this->service.delMessage(poz);

        cout << endl;
    }
    catch(RepoValidator& e){
        cout<<e.what()<<endl;
    }
}

void UserInterface::delEvent() {
    try {
        cout << "Dati pozitia de unde vreti sa stergeti evenimentul:";
        int poz;
        cin >> poz;
        this->service.delEvent(poz);
        cout << endl;
    }
    catch(RepoValidator& e)
    {
        cout<<e.what()<<endl;
    }
}

int UserInterface::updateUser() {
    try {
        cout << "Dati id-ul utilizatorului pe care doriti sa-l modificati:";
        int id ;
        cin >> id;
        cout << endl;

        cout << "Dati numele utilizatorului pe care diriti sa-l modificati:";
        char *nume = new char[100];
        cin >> nume;
        cout << endl;

        cout<<"Dati prenumele utilizatorului pe care doriti sa-l modificati!";
        char*prenume = new char[10];
        cin>>prenume;
        cout<<endl;

        cout << "Dati anul nasterii pentru utlizatorul pe care diriti sa-l modifcati:";
        int anul;
        cin >> anul;
        cout << endl;

        cout << "Dati noul id al utilizatorului:";
        int idNou;
        cin >> idNou;
        cout << endl;
        cout << "Dati noul nume al utilizatorului:";
        char *numeNou = new char[100];
        cin >> numeNou;
        cout << endl;

        cout<<"Dati nou prenume al utilizatorului !";
        char*prenumeNou = new char[10];
        cin>>prenumeNou;
        cout<<endl;

        cout << "Dati noul an al nasterii:";
        int anulNou;
        cin >> anulNou;
        cout << endl;

        return this->service.updateUser(id, nume,prenume, anul, idNou, numeNou,prenumeNou, anulNou);
        delete[] prenumeNou;
        delete[] numeNou;
        delete[]prenume;
        delete[]nume;

        cout << "Modificarea a avut loc cu succes!";
        cout << endl;
    }
    catch (RepoValidator& e)
    {
        cout<<e.what()<<endl;
    }
}

void UserInterface::getAllUsers() {

    this->service.getAllUser();
}

void UserInterface::getAllFriends() {
    this->service.getAllFriend();

}

void UserInterface::getAllMessages() {
    this->service.getAllMessage();
}

void UserInterface::getAllEvents() {
    this->service.getAllEvent();
}


void UserInterface::addUserDictionary() {
    try {
        cout << "Dati id-ul utilizatorului:";
        int idUser;
        cin >> idUser;
        cout << endl;
        cout << "Dati numele utilizatorului: ";
        char *nume = new char[100];
        cin >> nume;
        cout << endl;
        cout<<"Dati prenumele utilizatorului:";
        char* prenume = new char[100];
        cin>>prenume;
        cout << "Dati anul de nastere al utilizatorului: ";
        int year;
        cin >> year;
        cout << endl;

        // cout<<endl;
        this->serviceD.addUser(idUser, nume,prenume,  year, idUser);
        delete[] prenume;
        delete[] nume;
        //delete[] idUser;
    }
    catch (RepoValidator& e){
        cout<<e.what()<<endl;
    }
    catch(ValidatorExceptii& e){
        vector<string>elems= e.toString();
        for(auto i = 0;i<elems.size(); i++)
        {
            cout<<elems[i]<<" "<<endl;
        }
    }
    catch(const char* ex){
        cout<<ex<<endl;
    }
}
void UserInterface::getAllUserDictionary() {
    cout<<"Utilizatorii sunt:"<<endl;
    this->serviceD.getAllUser();
}


int UserInterface::getSizeUser() {
    return this->serviceD.getSizeUser();
}


void UserInterface::removeUserDictionary() {
    cout<<"Dati cheia de la care doriti sa stergeti:";
    int key;
    cin>>key;
    this->serviceD.removeUser(key);

}


UserInterface::UserInterface() {

}

UserInterface::UserInterface(ServiceLista &s, ServiceDictionary &sd) {
    this->service = s;
    this->serviceD = sd;
}


void UserInterface::runMenu() {
    int optiune = 0;
    while(optiune != 4) {

        cout << "--------Meniu---------" << endl;
        cout << "Scrieti 1 pentru a afisa meniul pentru TAD lista "
                "sau 2 pentru a afisa meniule pentru TAD dictionar: "<<endl;
        cout << "1.TAD lista cu elemente generice!" << endl;
        cout << "2.TAD dictionar cu elemente generice!" << endl;
        cout << "3. Iesire" << endl;
        cout<<"Dati optiunea:";
        cin >> optiune;

        if (optiune == 1)
        {

            int opt = 0;
            while (opt != 15)
            {
                cout << "----Meniu lista----" << endl;
                cout<<"~~~~Adaugare~~~~"<<endl;
                cout << "1.Adaugare utilizator:" << endl;
                cout << "2.Adaugare prietenie" << endl;
                cout << "3.Adaugare mesaj:" << endl;
                cout << "4.Adaugare eveniment:" << endl;

                cout<<"~~~~Stergere~~~~"<<endl;

                cout << "5.Stergere utlizator" << endl;
                cout << "6.Stergere prietenie" << endl;
                cout << "7.Stergere mesaj" << endl;
                cout << "8. Stergere eveniment" << endl;
                cout<<"~~~~Modificare~~~~"<<endl;
                cout << "9.Modificare utilizator" << endl;
                cout<<"~~~~Afisare~~~~"<<endl;
                cout << "10.Afisare utlizatori" << endl;
                cout << "11.Afisare prietenii" << endl;
                cout << "12.Afisarea mesaje" << endl;
                cout << "13.Afisare evenimente" << endl;
                cout<<"14.Iesire"<<endl;
                cout<<"Dati optiunea:";
                cin>>opt;

                if (opt == 1) {
                    addUser();
                }
                if (opt == 2) {
                    addFriend();
                }
                if (opt == 3) {
                    addMessage();
                }
                if (opt == 4) {
                    addEvent();
                }
                if (opt == 5) {
                    delUser();
                }
                if (opt == 6) {
                    delFriend();
                }
                if (opt == 7) {
                    delMessage();
                }
                if (opt == 8) {
                    delEvent();
                }
                if (opt == 9) {
                    updateUser();
                }
                if (opt == 10) {
                    getAllUsers();
                }
                if (opt == 11) {
                    getAllFriends();
                }
                if (opt == 12) {
                    getAllMessages();
                }
                if (opt == 13) {
                    getAllEvents();
                }
                if(opt == 14){
                    break;
                }
                if(opt < 0 || opt > 15)
                    cout<<"Optiune gresita! Va rugam reincercati!"<<endl;
            }
        }
        if(optiune == 2){
            int option = 0;
            while (option != 5)
            {
                cout << "----Meniu lista----" << endl;
                cout << "1.Adaugare utilizator:" << endl;
                cout<<"2.Afisare"<<endl;
                cout<<"3. Stergere utlizator"<<endl;
                cout<<"4. Iesire"<<endl;
                cout<<"datio optiunea:";
                cin>>option;
                if(option == 1)
                {
                    addUserDictionary();

                }
                if(option == 2){
                    getAllUserDictionary();
                }
                if(option == 3){
                    removeUserDictionary();
                }
                if(option == 4){
                    break;
                }

                if(option <= 0 || option >= 5)
                    cout<<"Optiune gresita! Va rugam reincercati!"<<endl;
            }
        }
        if (optiune == 3) {
            break;
        }
        if(optiune <= 0 || optiune >=4)
             cout<<"Optiune gresita! Va rugam reincercati!"<<endl;
    }

}

UserInterface::~UserInterface() {

}







