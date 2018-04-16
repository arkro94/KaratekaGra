#include "cczerwony.h"

CCzerwony::CCzerwony(int xx, int yy, bool kieruneczek, int h, float m)
{
    this->setX(xx);
    this->setY(yy);
    this->setKierunek(kieruneczek);
    this->setHP(h);
    this->setMana(m);
    this->setID(1);


    przyrostmany=0.05;


    DodajCiosy();
    //DodajBajery();
}

void CCzerwony::dodajMany(){
    mana=mana+przyrostmany;
    if(mana>=100)
        mana=100;
}

void CCzerwony::DodajCiosy(){
    CCzerwony *tenkarateka = this;

    CStoj *stoj_czerw = new CStoj("stoj", tenkarateka);
    ciosy.push_back(stoj_czerw);

    CLewo *lewo_czerw = new CLewo("lewo", tenkarateka);
    ciosy.push_back(lewo_czerw);

    CPrawo *prawo_czerw = new CPrawo("prawo", tenkarateka);
    ciosy.push_back(prawo_czerw);

    CGarda *garda_czerw = new CGarda("garda", tenkarateka);
    ciosy.push_back(garda_czerw);

    CBoks *boks_czerw = new CBoks("boks", tenkarateka);
    ciosy.push_back(boks_czerw);

    CSkok *skok_czerw = new CSkok("skok", tenkarateka,2);
    ciosy.push_back(skok_czerw);

    CKopniak *kop_czerw = new CKopniak("kop", tenkarateka,8);
    ciosy.push_back(kop_czerw);

    CAZaglady *az_czerw = new CAZaglady("inferno", tenkarateka,30);
    ciosy.push_back(az_czerw);

}


/*
ICObiekt* CCzerwony::DodajBajery(unsigned int x){
    //CNiebieski *tenkarateka = this;

    if(x==7){
        CAtakZaglady *at_z_nieb;
        danyobiekt=at_z_nieb;
    }
    else
        danyobiekt=NULL;

    return danyobiekt;
}
*/

void CCzerwony::DodajBajer(unsigned int x){
    //CCzerwony *tenkarateka = this;
    if(x==7){
        //CAtakZaglady *at_czerw = new CAtakZaglady("atak", tenkarateka);
        //obiekty.push_back(at_czerw);
    }
}

