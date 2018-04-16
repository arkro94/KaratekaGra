#include "ckarateka.h"

CKarateka::CKarateka()
{
    zyje=true;
    atakuje=false;
    broni=false;
    atak=0;
    zasieg=0;
}

void CKarateka::setStan(unsigned int x){
    zachowanie=ciosy[x];
    danyobiekt=obiekty[x];
}

void CKarateka::updateStan(){
    zachowanie->execute();
}

void CKarateka::update(unsigned int i, deque<CKarateka *> wsk){
    wsk[i]->updateStan();
    dodajMany();

    //update flar
    for (unsigned int ii=0; ii<obiekty.size();ii++){

        if(obiekty[ii]->podajStan()==false)
            obiekty.erase(obiekty.begin()+ii);

        obiekty[ii]->update();
    }

    sprawdzKolizjeKaratekow(i,wsk);
    sprawdzKolizjeFlar(i,wsk);

}


deque <ICObiekt*> CKarateka::przekazObiekty(){
    return obiekty;
}

void CKarateka::dodajObiekt(ICObiekt *ob){
    obiekty.push_back(ob);
}

void CKarateka::dodajMany(){
    mana+=0.2;
    if(mana>=100)
        mana=100;
}

void CKarateka::oberwal(int a){
    hp=hp-a;
    if(hp<=0)
        zyje=false;

}

int CKarateka::getX(){
    return x;
}

void CKarateka::setX(int xx){
    x = xx;
}

int CKarateka::getY(){
    return y;
}

void CKarateka::setY(int yy){
    y = yy;
}

bool CKarateka::getKierunek(){
    return kierunek;
}

void CKarateka::setKierunek(bool k){
    kierunek = k;
}

int CKarateka::getHP(){
    return hp;
}

void CKarateka::setHP(int h){
    hp = h;
}

float CKarateka::getMana(){
    return mana;
}

void CKarateka::setMana(float m){
    mana = m;
}

int CKarateka::getID(){
    return ID;
}

void CKarateka::setID(float id){
    ID = id;
}

bool CKarateka::getBroni(){
    return broni;
}

void CKarateka::setBroni(bool b){
    broni=b;
}

bool CKarateka::getAtakuje(){
    return atakuje;
}

void CKarateka::setAtakuje(bool a){
    atakuje =a;
}

bool CKarateka::getZyje(){
    return zyje;
}

void CKarateka::setZyje(bool z){
    zyje=z;
}

int CKarateka::getAtak(){
    return atak;
}

void CKarateka::setAtak(int a){
    atak=a;
}

int CKarateka::getZasieg(){
    return zasieg;
}

void CKarateka::setZasieg(int z){
    zasieg=z;
}

ICObiekt* CKarateka::getObiektInfo(){
    return danyobiekt;
}

void CKarateka::sprawdzKolizjeKaratekow(unsigned int i, deque<CKarateka *> wsk){
    for(unsigned int k=0;k<wsk.size();k++)
        if(k!=i)
            if(wsk[i]->getAtakuje()==true && ((wsk[k]->getBroni()==false) ||
                                      (wsk[k]->getBroni()==true && wsk[i]->getKierunek()==wsk[k]->getKierunek()))){

                if(wsk[i]->getKierunek()==true)
                    if(wsk[i]->getX()<=wsk[k]->getX() && wsk[i]->getX()+40+wsk[i]->getZasieg()>wsk[k]->getX())
                        wsk[k]->oberwal(wsk[i]->getAtak());

                if(wsk[i]->getKierunek()==false)
                    if(wsk[i]->getX()>=wsk[k]->getX() && wsk[i]->getX()-40-wsk[i]->getZasieg()<wsk[k]->getX())
                        wsk[k]->oberwal(wsk[i]->getAtak());
            }
}

void CKarateka::sprawdzKolizjeFlar(unsigned int i, deque<CKarateka *> wsk){
    for(unsigned int k=0;k<wsk.size();k++)
        if(k!=i)
            for(unsigned int l=0;l<wsk[k]->przekazObiekty().size();l++)
                if(wsk[i]->getX()>=wsk[k]->przekazObiekty()[l]->podajX() &&
                        wsk[i]->getX()<wsk[k]->przekazObiekty()[l]->podajX()+wsk[k]->przekazObiekty()[l]->podajZasieg()){
                    wsk[i]->oberwal(wsk[k]->przekazObiekty()[l]->podajObrazenia());
                    wsk[k]->przekazObiekty()[l]->ustawStan(false);
                }
}
