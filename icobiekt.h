#ifndef ICOBIEKT_H
#define ICOBIEKT_H

#include <iostream>

using namespace std;

class ICObiekt
{
protected:
    string event;   //do testow
public:
    //ICObiekt();
    virtual void update ()=0;
    virtual int podajX()=0;
    virtual int podajY()=0;
    virtual bool podajStan()=0;
    virtual int podajZasieg()=0;
    virtual int podajID()=0;
    virtual int podajObrazenia()=0;
    virtual void ustawStan(bool s)=0;



    string getEvent();
    void setEvent(string s);
};

#endif // ICOBIEKT_H
