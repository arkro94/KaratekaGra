#include "czachowania.h"

#include "cbajery.h"
CLewo::CLewo(string s, CKarateka *k)
{
    Kar=k;
    this->setStan(s);
}

void CLewo::execute(){
    //cout<<stan<<" dany stan"<<endl;
    //Kar->setObiekt(o);

    Kar->setX(Kar->getX()-20);
    if(Kar->getX()<0  )
        Kar->setX(0);
    if(Kar->getX()>720)
        Kar->setX(720);
    Kar->setKierunek(0);

    Kar->setAtakuje(0);
    Kar->setBroni(0);
    Kar->setAtak(0);
    Kar->setZasieg(0);

}


CPrawo::CPrawo(string s, CKarateka *k)
{
    Kar=k;
    this->setStan(s);
}

void CPrawo::execute(){
    //cout<<stan<<" dany stan"<<endl;

    Kar->setX(Kar->getX()+20);
    if(Kar->getX()<0  )
        Kar->setX(0);
    if(Kar->getX()>720)
        Kar->setX(720);
    Kar->setKierunek(1);

    Kar->setAtakuje(0);
    Kar->setBroni(0);
    Kar->setAtak(0);
    Kar->setZasieg(0);

}

CGarda::CGarda(string s, CKarateka *k)
{
    Kar=k;
    this->setStan(s);

}

void CGarda::execute(){
    //cout<<stan<<" dany stan"<<endl;

    Kar->setAtakuje(0);
    Kar->setBroni(1);
    Kar->setAtak(0);
    Kar->setZasieg(0);

}


CSkok::CSkok(string s, CKarateka *k, int kosztmany)
{
    Kar=k;
    this->setStan(s);
    manaminus=kosztmany;

}

void CSkok::przemiesc(){
    if(Kar->getKierunek()==1){
        Kar->setX((Kar->getX()+100));
    }
    else if(Kar->getKierunek()==0){
        Kar->setX(Kar->getX()-100);
    }
    Kar->setAtakuje(0);
    Kar->setBroni(0);
    Kar->setAtak(0);
    Kar->setZasieg(0);
}

void CSkok::execute(){
    //cout<<stan<<" dany stan"<<endl;

    if(Kar->getMana()>manaminus){
        Kar->setMana(Kar->getMana()-manaminus);
        przemiesc();
    }
}


void CTeleport::execute()
{
    if(Kar->getMana()>manaminus){
        Kar->setMana(Kar->getMana()-manaminus);

        przemiesc();

        if(Kar->getKierunek()==0)
            Kar->setKierunek(1);
        else if(Kar->getKierunek()==1)
            Kar->setKierunek(0);
    }
}

CBoks::CBoks(string s, CKarateka *k)
{
    Kar=k;
    this->setStan(s);
}

void CBoks::execute(){
    //cout<<stan<<" dany2 stan"<<endl;

    Kar->setAtakuje(1);
    Kar->setBroni(0);
    Kar->setAtak(5);
    Kar->setZasieg(0);

}

CKopniak::CKopniak(string s, CKarateka *k, int kosztmany)
{
    Kar=k;
    this->setStan(s);
    manaminus=kosztmany;

}

void CKopniak::execute(){
    //cout<<stan<<" dany stan"<<endl;

    Kar->setAtakuje(1);
    Kar->setBroni(0);
    Kar->setAtak(10);
    Kar->setZasieg(50);

    if(Kar->getMana()>manaminus){
        Kar->setMana(Kar->getMana()-manaminus);

    }

}

CStoj::CStoj(string s, CKarateka *k)
{
    Kar=k;
    this->setStan(s);
}

void CStoj::execute(){

    Kar->setAtakuje(0);
    Kar->setBroni(0);
    Kar->setAtak(0);
    Kar->setZasieg(0);

}

CInf::CInf(string s, CKarateka *k, int kosztmany)
{
    Kar=k;
    this->setStan(s);
    manaminus=kosztmany;

    ID_ciosu=1;
    zasieg_ciosu=150;
    obr_ciosu=4;


}


//inferno
void CInf::execute(){
    //cout<<stan<<" dany stan"<<endl;


    if(Kar->getMana()>manaminus){
        Kar->setMana(Kar->getMana()-manaminus);
        Kar->setAtakuje(0);
        Kar->setBroni(0);
        CInferno* in = new CInferno("infernoo", Kar,ID_ciosu,zasieg_ciosu,obr_ciosu,true,Kar->getX(),Kar->getY(),Kar->getKierunek());
        Kar->dodajObiekt(in);

    }


}

//atak zaglady
CAZaglady::CAZaglady(string s, CKarateka *k, int kosztmany)
{
    Kar=k;
    this->setStan(s);
    manaminus=kosztmany;

    ID_ciosu=2;
    zasieg_ciosu=200;
    obr_ciosu=16;

}

void CAZaglady::execute(){

    if(Kar->getMana()>manaminus){
        Kar->setMana(Kar->getMana()-manaminus);
        Kar->setBroni(0);
        Kar->setAtakuje(0);
        CAtakZaglady* az = new CAtakZaglady("atak_zaglady", Kar,ID_ciosu,zasieg_ciosu,obr_ciosu,true,Kar->getX(),Kar->getY(),Kar->getKierunek());
        Kar->dodajObiekt(az);
    }

}


//kula ognia
CKOgnia::CKOgnia(string s, CKarateka *k, int kosztmany){
    Kar=k;
    this->setStan(s);
    manaminus=kosztmany;

    ID_ciosu=3;
    zasieg_ciosu=30;
    obr_ciosu=4;

}

void CKOgnia::execute(){
    if(Kar->getMana()>manaminus){
        Kar->setMana(Kar->getMana()-manaminus);
        Kar->setBroni(0);
        Kar->setAtakuje(0);
        CKulaOgnia* ko = new CKulaOgnia("kula_ognia",Kar,ID_ciosu,zasieg_ciosu,obr_ciosu,true,Kar->getX(),Kar->getY(),Kar->getKierunek());
        Kar->dodajObiekt(ko);
    }
}
