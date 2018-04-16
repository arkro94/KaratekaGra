#ifndef CELEMENTGRAFIKI_H
#define CELEMENTGRAFIKI_H

#include <iostream>

#include "SFML/Graphics.hpp"


using namespace std;

class CElementGrafiki
{
private:
    sf::Texture t;
    sf::Sprite s;
public:
    CElementGrafiki();
    void ladujteksture(string x);
    void ustawteksture();
    void ustawpozycje(float x,float y);
    //void wybierzkontur();
    void wybierzkontur(int ID, bool kierunek, int grafika, bool zyje);

    sf::Sprite przekazprite();

};

#endif // CELEMENTGRAFIKI_H
