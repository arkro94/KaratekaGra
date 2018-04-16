#ifndef CCZERWONY_H
#define CCZERWONY_H

#include "ckarateka.h"

#include "czachowania.h"
#include "cbajery.h"

class CCzerwony : public CKarateka
{
private:
    float przyrostmany;
public:
    CCzerwony(int xx, int yy, bool kieruneczek, int h, float m);
    void dodajMany();

    void DodajCiosy();
    //ICObiekt* DodajBajery(unsigned int x);
    void DodajBajer(unsigned int x);

};

#endif // CCZERWONY_H
