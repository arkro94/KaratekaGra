#ifndef CBAJERY_H
#define CBAJERY_H

#include "icobiekt.h"

#include "ckarateka.h"

class CBazowaObiekt :public ICObiekt
{
protected:
    CKarateka *Kar;
    bool stan, kierun;
    int x,y,zasieg,ID, obrazenia;
public:
    CBazowaObiekt(string e, CKarateka *k, int id, int z, int ob, bool s, int xx, int yy, bool kier);
    void update();
    int podajX();
    int podajY();
    bool podajStan();
    int podajZasieg();
    int podajID();
    int podajObrazenia();
    void ustawStan(bool s);
};

class CAtakZaglady :public CBazowaObiekt
{
public:
    CAtakZaglady(string e, CKarateka *k, int id, int z, int ob, bool s,int xx, int yy, bool kier)
        :CBazowaObiekt(e,k,id,z,ob,s,xx,yy,kier) {}
    void update ();
};


class CInferno :public CBazowaObiekt
{
public:
    CInferno(string e, CKarateka *k, int id, int z, int ob, bool s,int xx, int yy, bool kier)
        :CBazowaObiekt(e,k,id,z,ob,s,xx,yy,kier) {}
    void update ();
};

class CKulaOgnia :public CBazowaObiekt
{
protected:
    int krok;
public:
    CKulaOgnia(string e, CKarateka *k, int id, int z, int ob, bool s,int xx, int yy, bool kier)
        :CBazowaObiekt(e,k,id,z,ob,s,xx,yy,kier) {}
    void ruszaj(int ile);
    void update();
};

#endif // CBAJERY_H
