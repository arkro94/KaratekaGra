#ifndef CNIEBIESKI_H
#define CNIEBIESKI_H

#include "ckarateka.h"

#include "czachowania.h"
#include "cbajery.h"

class CNiebieski : public CKarateka
{
private:
    int silakopu;

public:
    CNiebieski(int xx, int yy, bool kieruneczek, int h, float m);

    void DodajCiosy();
    //ICObiekt* DodajBajery(unsigned int x);
    void DodajBajer(unsigned int x);
};

#endif // CNIEBIESKI_H
