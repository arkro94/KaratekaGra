#ifndef CKARATEKA_H
#define CKARATEKA_H

#include <iostream>

#include <deque>

#include "iccios.h"
#include "icobiekt.h"

using namespace std;

class CKarateka
{
protected:
    //string stan;

    ICCios* zachowanie;
    deque <ICCios*> ciosy;

    ICObiekt* danyobiekt;
    deque <ICObiekt*> obiekty;

    int x;
    int y;
    int ID;

    bool kierunek;
    bool atakuje;
    bool broni;
    bool zyje;

    int hp;
    float mana;
    int atak;
    int zasieg;
public:

    CKarateka();

    void setStan(unsigned int x);
    void updateStan();

    void dodajObiekt(ICObiekt *ob);
    deque <ICObiekt*> przekazObiekty();

    void update(unsigned int i, deque <CKarateka*> wsk);
    ICObiekt* getObiektInfo();
    void isdead();

    virtual void DodajCiosy()=0;
    virtual void DodajBajer(unsigned int x)=0;

    void sprawdzKolizjeKaratekow(unsigned int i, deque<CKarateka *> wsk);
    void sprawdzKolizjeFlar(unsigned int i, deque<CKarateka *> wsk);

    void dodajMany();
    void oberwal(int a);

// x
    int getX();
    void setX(int xx);
// y
    int getY();
    void setY(int yy);
// kierunek
    bool getKierunek();
    void setKierunek(bool k);
// broni
    bool getBroni();
    void setBroni(bool b);
//atakuje
    bool getAtakuje();
    void setAtakuje(bool a);
//zyje
    bool getZyje();
    void setZyje(bool z);
// hp
    int getHP();
    void setHP(int h);
//mana
    float getMana();
    void setMana(float m);
//ID
    int getID();
    void setID(float id);
//atak
    int getAtak();
    void setAtak(int a);
//zasieg
    int getZasieg();
    void setZasieg(int z);

};

#endif // CKARATEKA_H
