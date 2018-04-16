#include "cniebieski.h"

CNiebieski::CNiebieski(int xx, int yy, bool kieruneczek, int h, float m)
{
    this->setX(xx);
    this->setY(yy);
    this->setKierunek(kieruneczek);
    this->setHP(h);
    this->setMana(m);

    this->setID(2);
    //silakopu=8;

    //DodajBajery();
    DodajCiosy();
}

void CNiebieski::DodajCiosy(){
    CNiebieski *tenkarateka = this;

    CStoj *stoj_nieb = new CStoj("stoj", tenkarateka);
    ciosy.push_back(stoj_nieb);

    CLewo *lewo_nieb = new CLewo("lewo", tenkarateka);
    ciosy.push_back(lewo_nieb);

    CPrawo *prawo_nieb = new CPrawo("prawo", tenkarateka);
    ciosy.push_back(prawo_nieb);

    CGarda *garda_nieb = new CGarda("garda", tenkarateka);
    ciosy.push_back(garda_nieb);

    CBoks *boks_nieb = new CBoks("boks", tenkarateka);
    ciosy.push_back(boks_nieb);

    CTeleport *tele_nieb = new CTeleport("teleport", tenkarateka,5);
    ciosy.push_back(tele_nieb);

    CKopniak *kop_nieb = new CKopniak("kopniak", tenkarateka,8);
    ciosy.push_back(kop_nieb);

    CKOgnia *kula_nieb = new CKOgnia("kula_ognia", tenkarateka,25);
    ciosy.push_back(kula_nieb);

    //CInf *inf_nieb = new CInf("inferno", tenkarateka,50);
    //ciosy.push_back(inf_nieb);

}
/*
ICObiekt* CNiebieski::DodajBajery(unsigned int x){
    CNiebieski *tenkarateka = this;

    if(x==7){
        CInferno *infer_nieb = new CInferno("inferno",tenkarateka);
        danyobiekt=infer_nieb;
    }
    else
        danyobiekt=NULL;

    return danyobiekt;


}
*/

void CNiebieski::DodajBajer(unsigned int x){
    //CNiebieski *tenkarateka = this;
    if(x==7){
        //CInferno *infer_nieb = new CInferno("inferno", tenkarateka);
        //obiekty.push_back(infer_nieb);
    }
}


/*
void CCzerwony::DodajBajery(){
    CCzerwony *tenkarateka = this;

    obiekty.push_back(NULL);

    CInferno *inf_czerw = new CInferno("inferno",tenkarateka);
    obiekty.push_back(inf_czerw);
}*/
