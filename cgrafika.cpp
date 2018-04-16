#include "cgrafika.h"

int rozmiar_x=800;
int rozmiar_y=400;



CGrafika::CGrafika()
{
        okno.create(sf::VideoMode(rozmiar_x, rozmiar_y), "Kung Fu");
        stan1=stan2=0;

        if(!font.loadFromFile("cos2.ttf")){
            cout<<"ERROR"<<endl;
        }
}

void CGrafika::odswiezGrafike(){

    okno.clear();

    for(unsigned int i=0;i<element.size();i++){
        okno.draw(element[i].przekazprite());
    }

    okno.draw( label1 );
    okno.draw( label2 );
    okno.draw( label3 );
    okno.draw( label4 );

    for(unsigned int j=0;j<flary1.size();j++){
        okno.draw(flary1[j].przekazprite());
    }

    for(unsigned int k=0;k<flary2.size();k++){
        okno.draw(flary2[k].przekazprite());
    }

    okno.display();
    flary1.clear();
    flary2.clear();
}

void CGrafika::pobierzdane(deque <CKarateka*> wsk){

        for(unsigned int i=0;i<wsk.size();i++){
                if(element.size()<wsk.size())
                    element.push_back(ele);
                if(wsk[i]->getID()==1){
                    element[i].ladujteksture("red_fighter2.png");
                    dodajFlary(wsk,flary1,i);
                }
                if(wsk[i]->getID()==2){
                    element[i].ladujteksture("blue_fighter2.png");
                    dodajFlary(wsk,flary2,i);
                }

                element[i].ustawteksture();

                element[i].ustawpozycje(wsk[i]->getX(),wsk[i]->getY());

                if(i==0)
                element[i].wybierzkontur(wsk[i]->getID(),wsk[i]->getKierunek(),stan1,wsk[i]->getZyje());

                if(i==1)
                element[i].wybierzkontur(wsk[i]->getID(),wsk[i]->getKierunek(),stan2,wsk[i]->getZyje());

        }
}

void CGrafika::update(deque <CKarateka *> wsk){


    for(unsigned int i=0; i<wsk.size();i++){

            sf::Event zdarzenie;
            while( okno.pollEvent( zdarzenie ) )
            {
                if( zdarzenie.type == sf::Event::Closed )
                    okno.close();

                if( zdarzenie.type == sf::Event::KeyPressed && zdarzenie.key.code == sf::Keyboard::Escape )
                    okno.close();
            }

                if(sf::Keyboard::isKeyPressed(sf::Keyboard::E) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))){
                    wsk[0]->setStan(7);
                    stan1=7;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
                    wsk[0]->setStan(1);
                    stan1=1;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
                    wsk[0]->setStan(2);
                    stan1=2;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
                    wsk[0]->setStan(3);
                    stan1=3;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)){
                    wsk[0]->setStan(4);
                    stan1=4;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
                    wsk[0]->setStan(5);
                    stan1=5;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)){
                    wsk[0]->setStan(6);
                    stan1=6;
                }
                else {
                    wsk[0]->setStan(0);
                    stan1=0;
                }

                if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad7) && (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad9))){
                    wsk[1]->setStan(7);
                    stan2=7;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4)){
                    wsk[1]->setStan(1);
                    stan2=1;
            }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5)){
                    wsk[1]->setStan(2);
                    stan2=2;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6)){
                    wsk[1]->setStan(3);
                    stan2=3;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad7)){
                    wsk[1]->setStan(4);
                    stan2=4;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8)){
                    wsk[1]->setStan(5);
                    stan2=5;
                }

                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad9)){
                    wsk[1]->setStan(6);
                    stan2=6;
                }
                else {
                    wsk[1]->setStan(0);
                    stan2=0;
                }
    }

    odswiezNapisy(wsk);
    odswiezGrafike();

}

void CGrafika::dodajFlary(deque<CKarateka *> wsk, deque <CElementGrafiki> &flary, unsigned int i){

    for(unsigned int l=0;l<wsk[i]->przekazObiekty().size();l++){
        flary.push_back(ele);


        if(wsk[i]->przekazObiekty()[l]->podajID()==1)
            flary[l].ladujteksture("fire3.png");

        else if(wsk[i]->przekazObiekty()[l]->podajID()==2)
            flary[l].ladujteksture("ogien2.png");

        else if(wsk[i]->przekazObiekty()[l]->podajID()==3)
            flary[l].ladujteksture("blyskawica1.png");

        flary[l].ustawteksture();
        flary[l].ustawpozycje(wsk[i]->przekazObiekty()[l]->podajX(),wsk[i]->przekazObiekty()[l]->podajY());
    }
}

void CGrafika::odswiezNapisy(deque<CKarateka *> wsk){
ostringstream s1,s2,s3,s4;


    int temp1 = wsk[0]->getHP();
    float sch1 = wsk[0]->getMana();
    int sc1=sch1;
    s1 << temp1;
    s3 << sc1;
    str1 = "zycie: "+s1.str();
    str3 = "mana : "+s3.str();

    int temp2 = wsk[1]->getHP();
    float sch2 = wsk[1]->getMana();
    int sc2=sch2;
    s2 << temp2;
    s4 << sc2;
    str2 = "zycie: "+s2.str();
    str4 = "mana : "+s4.str();




    label1.setString(str1);
    label1.setFont(font);
    label1.setCharacterSize(35);
    label1.setPosition( 20, 20 );
    label1.setColor(sf::Color::Red);

    label2.setString(str2);
    label2.setFont(font);
    label2.setCharacterSize(35);
    label2.setPosition( 600, 20 );
    label2.setColor(sf::Color::Red);

    label3.setString(str3);
    label3.setFont(font);
    label3.setCharacterSize(35);
    label3.setPosition( 20, 60 );
    label3.setColor(sf::Color::Blue);

    label4.setString(str4);
    label4.setFont(font);
    label4.setCharacterSize(35);
    label4.setPosition( 600, 60 );
    label4.setColor(sf::Color::Blue);

}
