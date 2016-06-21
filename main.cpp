#include <SFML/Graphics.hpp>
#include "VerApoyoAprendizaje.h"
#include "VerAtencionTiempo.h"
#include "VerAfectoCarinio.h"
#include "VerComunicacion.h"
#include "Aspecto.h"
#include <iostream>

using namespace std;

Utility utility;

int ventanaInicial(){
    sf::RenderWindow window;
    sf::Texture texture, text_btnComenzar,text_btnSalir;
    sf::Sprite background, back_btnComenzar,back_btnSalir;
    sf::Text txt_info, txt_title;
    sf::Vector2f mouse;
    sf::Font font;
    sf::String descrip;

    window.create(sf::VideoMode(500,300),"Introducción");
    font.loadFromFile("arial.ttf");

    texture.loadFromFile("ventanas/background_inicial.png");
    background.setTexture(texture);
    text_btnComenzar.loadFromFile("ventanas/comenzar.png");
    back_btnComenzar.setTexture(text_btnComenzar);
    back_btnComenzar.setPosition(350,230);
    text_btnSalir.loadFromFile("ventanas/salir.png");
    back_btnSalir.setTexture(text_btnSalir);
    back_btnSalir.setPosition(30,230);

    txt_info.setFont(font);txt_info.setCharacterSize(18);txt_info.setPosition(40,90);
    txt_title.setFont(font);txt_title.setCharacterSize(22);txt_title.setStyle(sf::Text::Underlined);
    txt_title.setPosition(90,30);txt_title.setColor(sf::Color::Blue);

    while (window.isOpen())
    {
        mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        sf::Event event;
        while (window.pollEvent(event)){}

        txt_title.setString("ENCUESTA PARA PADRES");
        txt_info.setString("A continuación se presenta una encuesta\n"
                       "que determina tu desempeño como padre de familia,\n"
                       "la encuesta cuenta con cuatro apartados; cada uno\n"
                       "evalua un aspecto de la relación que\n"
                       "mantienes con tu hijo/a y el tiempo que\n"
                       "dedicas a participar en sus actividades.");

        if(utility.clickSprite(back_btnComenzar, mouse)){
            window.close();
        }

        if(utility.clickSprite(back_btnSalir, mouse)){
            window.close();
            return -1;
        }

        window.draw(background);
        window.draw(txt_info);
        window.draw(txt_title);
        window.draw(back_btnComenzar);
        window.draw(back_btnSalir);
        window.display();
    }
    return 0;
}

void ventanaFinal(int pts1, int pts2, int pts3, int pts4, int total)
{
    sf::RenderWindow window;
    sf::Texture texture, text_btnSalir;
    sf::Sprite background, back_btnSalir;
    sf::Text txt_pts, txt_title, txt_ptsTotal, txt_descrip;
    sf::Font font;
    sf::Vector2f mouse;

    window.create(sf::VideoMode(600, 400), "Resultados!");
    font.loadFromFile("arial.ttf");

    texture.loadFromFile("ventanas/background_final.png");
    background.setTexture(texture);
    text_btnSalir.loadFromFile("ventanas/salir.png");
    back_btnSalir.setTexture(text_btnSalir);
    back_btnSalir.setPosition(230,330);

    txt_title.setFont(font);txt_title.setCharacterSize(22);txt_title.setStyle(sf::Text::Underlined);
    txt_title.setPosition(220,30);txt_title.setColor(sf::Color::Blue);
    txt_pts.setFont(font);txt_pts.setCharacterSize(18);txt_pts.setPosition(130,70);txt_pts.setColor(sf::Color::Black);
    txt_ptsTotal.setFont(font);txt_ptsTotal.setCharacterSize(22);txt_ptsTotal.setPosition(130,230);txt_ptsTotal.setColor(sf::Color::Blue);
    txt_descrip.setFont(font);txt_descrip.setCharacterSize(16);txt_descrip.setPosition(90,270);txt_descrip.setColor(sf::Color::Black);
    txt_descrip.setStyle(sf::Text::Bold);

    while (window.isOpen())
    {
        mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        sf::Event event;
        while (window.pollEvent(event)){/*No hay eventos*/}

        txt_title.setString("RESULTADOS");
        txt_pts.setString("Apoyo en el Aprendizaje: "+utility.toString(pts1)+
                          "\n\nAtención y Tiempo Compartido: "+utility.toString(pts2)+
                          "\n\nAfecto y Cariño: "+utility.toString(pts3)+
                          "\n\nComunicación: "+utility.toString(pts4));
        txt_ptsTotal.setString("Puntos: "+utility.toString(total)+"/100");

        if(total >= 80){
            txt_descrip.setString("Vaya, si que eres un padre dedicado y responsable,\n"
                                  "tu hijo esta orgulloso de ti.");
        }else if(total >= 60){
            txt_descrip.setString("Bien, tu desempeño como padre es aceptable,\n"
                                  "aunque deberias esfoforzarte un poco más.");
        }else if(total >= 40){
            txt_descrip.setString("Bueno, talves tu trabajo no te permita compartir parte\n"
                                  "de tu tiempo con tu hijo, aunque deberias dejar parte de tu\n"
                                  "tiempo para estar con él.");
        }else if(total >= 20){
            txt_descrip.setString("Tu rendimiento como padre no es el mejor\n"
                                  "necesitas mejorar mucho; talves tu hijo ni te tome en cuenta.");
        }else if(total >= 0){
            txt_descrip.setString("Deberias ser mas responsable, quizas tu hijo y demas\n"
                                  "familiares te consideren como un mal padre.");
        }

        if(utility.clickSprite(back_btnSalir,mouse)){
            window.close();
        }

        window.draw(background);
        window.draw(txt_title);
        window.draw(txt_pts);
        window.draw(txt_ptsTotal);
        window.draw(txt_descrip);
        window.draw(back_btnSalir);
        window.display();
    }
}

int main()
{
    Aspecto *aspecto;
    int pts = 0;

    if(ventanaInicial()!=-1){
        ApoyoAprendizaje apoyoAprendizaje;
        aspecto = &apoyoAprendizaje;
        VerApoyoAprendizaje verApoyoAprendizaje;
        aspecto->setPuntos(verApoyoAprendizaje.ventana());
        cout<<aspecto->getPuntos()<<endl;
        pts += aspecto->getPuntos();

        AtencionTiempo atencionTiempo;
        aspecto = &atencionTiempo;
        VerAtencionTiempo verAtencionTiempo;
        aspecto->setPuntos(verAtencionTiempo.ventana());
        cout<<aspecto->getPuntos()<<endl;
        pts += aspecto->getPuntos();

        AfectoCarinio afectoCarinio;
        aspecto = &afectoCarinio;
        VerAfectoCarinio verAfectoCarinio;
        aspecto->setPuntos(verAfectoCarinio.ventana());
        cout<<aspecto->getPuntos()<<endl;
        pts += aspecto->getPuntos();

        Comunicacion comunicacion;
        aspecto = &comunicacion;
        VerComunicacion verComunicacion;
        aspecto->setPuntos(verComunicacion.ventana());
        cout<<aspecto->getPuntos()<<endl;
        pts += aspecto->getPuntos();

        cout<<"Total Puntos: "<<pts<<endl;
        ventanaFinal(apoyoAprendizaje.getPuntos(),atencionTiempo.getPuntos(),afectoCarinio.getPuntos(), comunicacion.getPuntos(),pts);
    }

    return 0;
}
