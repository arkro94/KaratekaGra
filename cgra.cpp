#include "cgra.h"

CGra::CGra()
{

}

void CGra::rozgrywka(){


    // pozycja x, pozycja y, kierunek, zycie, mana,
    CCzerwony *czerw = new CCzerwony(100,200,1,100,90);
    CNiebieski *nieb = new CNiebieski(600,200,0,100,100);


    wsk.push_back(czerw);
    wsk.push_back(nieb);

    wsk[0]->setStan(0);
    wsk[0]->updateStan();

    wsk[1]->setStan(0);
    wsk[1]->updateStan();


    G.pobierzdane(wsk);


    while(true){

        for(unsigned int i=0;i<wsk.size();i++){
            G.update(wsk);
            wsk[i]->update(i,wsk);
            G.pobierzdane(wsk);
            }
        }
}
