#ifndef ICCIOS_H
#define ICCIOS_H

#include <iostream>

using namespace std;

class ICCios
{
protected:
    string stan;
public:
    //ICCios();
    virtual void execute( )=0;

    string getStan();
    void setStan(string s);

};


#endif // ICCIOS_H
