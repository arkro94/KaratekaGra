#include "celementgrafiki.h"

CElementGrafiki::CElementGrafiki()
{

}

void CElementGrafiki::ladujteksture(string x){
    if(!t.loadFromFile(x))
        cout<<"ERROR"<<endl;
}

void CElementGrafiki::ustawteksture(){
    s.setTexture(t);
}

void CElementGrafiki::ustawpozycje(float x, float y){
    s.setPosition(x,y);
}

sf::Sprite CElementGrafiki::przekazprite(){
    return s;
}

void CElementGrafiki::wybierzkontur(int ID, bool kierunek, int grafika, bool zyje){

    if(ID==1){

        if(zyje==false)
            s.setTextureRect(sf::IntRect(320,320,80,80));
        else if (kierunek==false && grafika==4)
            s.setTextureRect(sf::IntRect(880,160,80,80));
        else if (kierunek==false && grafika==3)
            s.setTextureRect(sf::IntRect(960,400,80,80));
        else if (kierunek==false && grafika==5)
            s.setTextureRect(sf::IntRect(1200,80,80,80));
        else if (kierunek==false && grafika==6)
            s.setTextureRect(sf::IntRect(1440,80,80,80));
        else if (kierunek==false && grafika==7)
            s.setTextureRect(sf::IntRect(1200,160,80,80));
        //else if (kierunek==false && o==true)
            //s.setTextureRect(sf::IntRect(1040,320,80,80));
        else if (kierunek==false)
            s.setTextureRect(sf::IntRect(1200,0,80,80));

        if(zyje==false)
            s.setTextureRect(sf::IntRect(320,320,80,80));
        else if (kierunek==true && grafika==4)
            s.setTextureRect(sf::IntRect(640,160,80,80));
        else if (kierunek==true && grafika==3)
            s.setTextureRect(sf::IntRect(560,400,80,80));
        else if (kierunek==true && grafika==5)
            s.setTextureRect(sf::IntRect(320,80,80,80));
        else if (kierunek==true && grafika==6)
            s.setTextureRect(sf::IntRect(80,80,80,80));
        else if (kierunek==true && grafika==7)
            s.setTextureRect(sf::IntRect(320,160,80,80));
        //else if (p==true && o==true)
            //s.setTextureRect(sf::IntRect(480,320,80,80));
        else if (kierunek==true)
            s.setTextureRect(sf::IntRect(320,0,80,80));
    }

    else if(ID==2){

        if(zyje==false)
            s.setTextureRect(sf::IntRect(320,320,80,80));
        else if (kierunek==false && grafika==4)
            s.setTextureRect(sf::IntRect(1120,80,80,80));
        else if (kierunek==false && grafika==3)
            s.setTextureRect(sf::IntRect(1040,400,80,80));
        else if (kierunek==false && grafika==5)
            s.setTextureRect(sf::IntRect(1280,480,80,80));
        else if (kierunek==false && grafika==6)
            s.setTextureRect(sf::IntRect(880,160,80,80));
        else if (kierunek==false && grafika==7)
            s.setTextureRect(sf::IntRect(1040,480,80,80));
        //else if (l==true && o==true)
          //  s.setTextureRect(sf::IntRect(1040,320,80,80));
        else if (kierunek==false)
            s.setTextureRect(sf::IntRect(960,0,80,80));

        if(zyje==false)
            s.setTextureRect(sf::IntRect(320,320,80,80));
        else if (kierunek==true && grafika==4)
            s.setTextureRect(sf::IntRect(400,80,80,80));
        else if (kierunek==true && grafika==3)
            s.setTextureRect(sf::IntRect(480,400,80,80));
        else if (kierunek==true && grafika==5)
            s.setTextureRect(sf::IntRect(240,480,80,80));
        else if (kierunek==true && grafika==6)
            s.setTextureRect(sf::IntRect(640,160,80,80));
        else if (kierunek==true && grafika==7)
            s.setTextureRect(sf::IntRect(480,480,80,80));
        //else if (p==true && o==true)
           // s.setTextureRect(sf::IntRect(480,320,80,80));
        else if (kierunek==true)
            s.setTextureRect(sf::IntRect(560,0,80,80));
    }
}
