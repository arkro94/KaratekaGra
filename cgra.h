#ifndef CGRA_H
#define CGRA_H

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>

#include "icobiekt.h"
#include "iccios.h"

#include "ckarateka.h"
#include "cniebieski.h"
#include "cczerwony.h"

#include "cgrafika.h"




using namespace std;

class CGra
{
private:
    deque <CKarateka*> wsk;
    CGrafika G;
public:
    CGra();
    void rozgrywka();

};

#endif // CGRA_H
