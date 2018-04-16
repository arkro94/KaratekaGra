#ifndef CGRAFIKA_H
#define CGRAFIKA_H

#include <iostream>
#include "ckarateka.h"
#include <sstream>


#include "celementgrafiki.h"

#include "SFML/Graphics.hpp"

using namespace std;

class CGrafika
{
private:
    sf::RenderWindow okno;

    CElementGrafiki ele;
    deque <CElementGrafiki> element;
    deque <CElementGrafiki> flary1, flary2;

    sf::Text label1;
    sf::Text label2;
    sf::Text label3;
    sf::Text label4;

    string str1,str2,str3,str4;

    sf::Font font;

    int stan1,stan2;
public:
    CGrafika();
    void odswiezGrafike();
    void pobierzdane(deque <CKarateka*> wsk);
    void update(deque <CKarateka*> wsk);
    void odswiezNapisy(deque <CKarateka*> wsk);
    void dodajFlary(deque<CKarateka *> wsk, deque<CElementGrafiki> &flary, unsigned int i);
};

#endif // CGRAFIKA_H
