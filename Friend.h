//
// Created by Carla Lazar on 02.05.2022.
//

#ifndef PROIECT_SDA_FRIEND_H
#define PROIECT_SDA_FRIEND_H

#include "User.h"
class Friend{
private:
    char* idUtilizator1;
    char* idUtilizator2;
public:
    ///constructorul fara parametrii
    Friend();
    /// constructorul de copiere
    /// \param idUtilizator1 id-ul primului prieten
    /// \param idUtilizator2 id-ul celui de-al doilea prieten
    Friend(const char *idUtilizator1,const char* idUtilizator2);
    /// constructorul de copiere
    /// \param f
    Friend(const Friend& f);
    /// setter
    /// \param idUtilizator1
    void setIdUtilizator1(const char* idUtilizator1);
    /// setter
    /// \param idUtilizator2
    void setIdUtilizator2(const char* idUtilizator2);
    /// getter
    /// \return
    char* getIdUtlizator1();
    /// getter
    /// \return
    char* getIdUtilizator2();
    /// operatorul =
    /// \param f
    /// \return
    Friend& operator =(const Friend& f);
    bool operator == (const Friend& f);
    ///
    /// \param os
    /// \param f
    /// \return
    friend ostream&operator<<(ostream& os, const Friend& f);
    ///destructorul
    ~Friend();
};


#endif //PROIECT_SDA_FRIEND_H
