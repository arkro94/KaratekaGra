#include "cbajery.h"

CBazowaObiekt::CBazowaObiekt(string e, CKarateka *k, int id, int z, int ob, bool s, int xx, int yy, bool kier){
    Kar=k;
    this->setEvent(e);
    ID=id;
    zasieg=z;
    obrazenia=ob;
    stan=s;
    x=xx;
    y=yy;
    kierun=kier;
}

void CBazowaObiekt::update(){
    cout<<"update"<<endl;
}


int CBazowaObiekt::podajX(){
    return x;
}

int CBazowaObiekt::podajY(){
    return y;
}

bool CBazowaObiekt::podajStan(){
    return stan;
}

int CBazowaObiekt::podajZasieg(){
    return zasieg;
}

int CBazowaObiekt::podajID(){
    return ID;
}

int CBazowaObiekt::podajObrazenia(){
    return obrazenia;
}

void CBazowaObiekt::ustawStan(bool s){
    stan=s;
}

void CAtakZaglady::update(){
    stan=false;
}

void CInferno::update(){

    if(Kar->getKierunek()==0)
        x=Kar->getX()-zasieg;
    if(Kar->getKierunek()==1)
        x=Kar->getX();

    stan=false;
}

void CKulaOgnia::ruszaj(int ile){
    if(kierun==0)
        x=x-ile;
    if(kierun==1)
        x=x+ile;
}

void CKulaOgnia::update(){
    krok =20;
    if(stan==true)
        ruszaj(krok);
    if(x<0 || x>720){
        stan=false;
    }
}
