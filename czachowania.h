#ifndef CZACHOWANIA_H
#define CZACHOWANIA_H


#include "iccios.h"
#include "ckarateka.h"

#include "icobiekt.h"


class CLewo :public ICCios
{
private:
    CKarateka *Kar;
    int o;
public:
    CLewo(string s, CKarateka *k);
    void execute();
};

class CPrawo :public ICCios
{
private:
    CKarateka *Kar;
    int o;
public:
    CPrawo(string s, CKarateka *k);
    void execute();
};

class CGarda :public ICCios
{
private:
    CKarateka *Kar;
    int o;
public:
    CGarda(string s, CKarateka *k);
    void execute();
};

class CSkok :public ICCios
{
protected:
    CKarateka *Kar;
    int o;
    int manaminus;
public:
    CSkok(string s, CKarateka *k, int kosztmany);
    void przemiesc();
    void execute();
};

class CTeleport :public  CSkok
{
//private:

public:
    CTeleport(string s, CKarateka *k, int kosztmany) :CSkok(s,k,kosztmany) {}
    void execute();
};

class CBoks :public ICCios
{
private:
    CKarateka *Kar;
    int o;
public:
    CBoks(string s, CKarateka *k);
    void execute();
};

class CKopniak :public ICCios
{
private:
    CKarateka *Kar;
    int o;
    int manaminus;
public:
    CKopniak(string s, CKarateka *k, int kosztmany);
    void execute();
};

class CStoj :public ICCios
{
private:
    CKarateka *Kar;
    int o;
public:
    CStoj(string s, CKarateka *k);
    void execute();
};

class CInf :public ICCios
{
private:
    CKarateka *Kar;
    int o;
    int manaminus;
    int ID_ciosu;
    int zasieg_ciosu;
    int obr_ciosu;

public:
    CInf(string s, CKarateka *k, int kosztmany);
    void execute();
};

class CAZaglady :public ICCios
{
private:
    CKarateka *Kar;
    int o;
    int manaminus;

    int ID_ciosu;
    int zasieg_ciosu;
    int obr_ciosu;


public:
    CAZaglady(string s, CKarateka *k, int kosztmany);
    void execute();
};


class CKOgnia :public ICCios
{
    CKarateka *Kar;
    int o;
    int manaminus;

    int ID_ciosu;
    int zasieg_ciosu;
    int obr_ciosu;

public:
    CKOgnia(string s, CKarateka *k, int kosztmany);
    void execute();
};

#endif // CZACHOWANIA_H
