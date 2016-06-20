#include "VerApoyoAprendizaje.h"
#include <SFML/Graphics.hpp>

VerApoyoAprendizaje::VerApoyoAprendizaje()
{
    //ctor
}

void VerApoyoAprendizaje::llenarDescripcion()
{
    descripcion[0]="1. Asisto a todas las reuniones de la escuela..........\n";
    descripcion[1]="2. Voy a la escuela una vez a la semana para \n    preguntar sobre el aprendizaje de mi hijo/a..........\n";
    descripcion[2]="3. Reviso diariamente las libretas de mi hijo/a..........\n";
    descripcion[3]="4. Apoyo diariamente a mi hijo/a con su tarea..........\n";
    descripcion[4]="5. Le pregunto cuales temas se le complican..........\n";
    descripcion[5]="6. Cuando obtiene bajas calificaciones \n    pienso que yo tambien soy responsable..........\n";
}

string VerApoyoAprendizaje::mostrarDescripcion(int c,string ac_descripcion)
{
    if(c < 6){
        ac_descripcion+=descripcion[c]+"\n";
        return mostrarDescripcion(c+1,ac_descripcion);
    }
    return ac_descripcion;
}

int VerApoyoAprendizaje::devolverIngreso(sf::String ingreso)
{
    string convert;
    convert = ingreso;
    return atoi(convert.c_str());
}

int VerApoyoAprendizaje::ventana(){
    sf::RenderWindow window;
    sf::Texture texture, text_ingreso1, text_ingreso2, text_ingreso3, text_ingreso4, text_ingreso5, text_ingreso6,text_enviar,text_blockenviar;
    sf::Sprite sprite, back_ingreso1, back_ingreso2, back_ingreso3, back_ingreso4, back_ingreso5, back_ingreso6,back_enviar,back_blockenviar;
    sf::Text txt_Title, txt_puntuar, txt_descripcion, txt_ingreso1, txt_ingreso2, txt_ingreso3, txt_ingreso4, txt_ingreso5, txt_ingreso6;
    sf::Font font;
    sf::Vector2f mouse;
    sf::String ingreso1, ingreso2, ingreso3, ingreso4, ingreso5, ingreso6;
    bool is_pressed1 = false,is_pressed2 = false,is_pressed3 = false,is_pressed4 = false,is_pressed5 = false,is_pressed6 = false;
    string convert, ac_descripcion="";
    int acumulador=0;

    window.create(sf::VideoMode(650, 550), "Apoyo en el Aprendizaje");
    window.setVisible(true);
    window.setPosition(sf::Vector2i(0,0));
    font.loadFromFile("arial.ttf");

    texture.loadFromFile("ventanas/background.png");
    sprite.setTexture(texture);
    text_ingreso1.loadFromFile("ventanas/ingreso.png");
    back_ingreso1.setTexture(text_ingreso1);
    back_ingreso1.setPosition(500,160);
    text_ingreso2.loadFromFile("ventanas/ingreso.png");
    back_ingreso2.setTexture(text_ingreso2);
    back_ingreso2.setPosition(500,225);
    text_ingreso3.loadFromFile("ventanas/ingreso.png");
    back_ingreso3.setTexture(text_ingreso3);
    back_ingreso3.setPosition(500,265);
    text_ingreso4.loadFromFile("ventanas/ingreso.png");
    back_ingreso4.setTexture(text_ingreso4);
    back_ingreso4.setPosition(500,310);
    text_ingreso5.loadFromFile("ventanas/ingreso.png");
    back_ingreso5.setTexture(text_ingreso5);
    back_ingreso5.setPosition(500,350);
    text_ingreso6.loadFromFile("ventanas/ingreso.png");
    back_ingreso6.setTexture(text_ingreso6);
    back_ingreso6.setPosition(500,415);
    text_blockenviar.loadFromFile("ventanas/block_enviar.png");
    back_blockenviar.setTexture(text_blockenviar);
    back_blockenviar.setPosition(470,470);
    text_enviar.loadFromFile("ventanas/enviar.png");
    back_enviar.setTexture(text_enviar);
    back_enviar.setPosition(-100,-100);

    txt_descripcion.setFont(font);
    txt_descripcion.setCharacterSize(18);
    txt_descripcion.setPosition(70,170);
    txt_puntuar.setFont(font);
    txt_puntuar.setCharacterSize(14);
    txt_puntuar.setColor(sf::Color::Red);
    txt_puntuar.setPosition(70,90);
    txt_Title.setFont(font);
    txt_Title.setColor(sf::Color::Blue);
    txt_Title.setCharacterSize(24);
    txt_Title.setStyle(sf::Text::Underlined);
    txt_Title.setPosition(120,30);
    txt_ingreso1.setFont(font);txt_ingreso1.setCharacterSize(20);txt_ingreso1.setColor(sf::Color::Black);txt_ingreso1.setPosition(505,163);
    txt_ingreso2.setFont(font);txt_ingreso2.setCharacterSize(20);txt_ingreso2.setColor(sf::Color::Black);txt_ingreso2.setPosition(505,228);
    txt_ingreso3.setFont(font);txt_ingreso3.setCharacterSize(20);txt_ingreso3.setColor(sf::Color::Black);txt_ingreso3.setPosition(505,269);
    txt_ingreso4.setFont(font);txt_ingreso4.setCharacterSize(20);txt_ingreso4.setColor(sf::Color::Black);txt_ingreso4.setPosition(505,313);
    txt_ingreso5.setFont(font);txt_ingreso5.setCharacterSize(20);txt_ingreso5.setColor(sf::Color::Black);txt_ingreso5.setPosition(505,353);
    txt_ingreso6.setFont(font);txt_ingreso6.setCharacterSize(20);txt_ingreso6.setColor(sf::Color::Black);txt_ingreso6.setPosition(505,418);

    llenarDescripcion();
//    int s =0;

    while (window.isOpen())
    {
        sf::Event event;
        mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if(event.type==sf::Event::TextEntered)
            {
                if(is_pressed1){
                    ingreso1.insert(ingreso1.getSize(),event.text.unicode);
                    txt_ingreso1.setString(ingreso1);
                    acumulador+=devolverIngreso(ingreso1);
                    is_pressed1 = false;
                }
                if(is_pressed2){
                    ingreso2.insert(ingreso2.getSize(),event.text.unicode);
                    txt_ingreso2.setString(ingreso2);
                    acumulador+=devolverIngreso(ingreso2);
                    is_pressed2 = false;
                }
                if(is_pressed3){
                    ingreso3.insert(ingreso3.getSize(),event.text.unicode);
                    txt_ingreso3.setString(ingreso3);
                    acumulador+=devolverIngreso(ingreso3);
                    is_pressed3 = false;
                }
                if(is_pressed4){
                    ingreso4.insert(ingreso4.getSize(),event.text.unicode);
                    txt_ingreso4.setString(ingreso4);
                    acumulador+=devolverIngreso(ingreso4);
                    is_pressed4 = false;
                }
                if(is_pressed5){
                    ingreso5.insert(ingreso5.getSize(),event.text.unicode);
                    txt_ingreso5.setString(ingreso5);
                    acumulador+=devolverIngreso(ingreso5);
                    is_pressed5 = false;
                }
                 if(is_pressed6){
                    ingreso6.insert(ingreso6.getSize(),event.text.unicode);
                    txt_ingreso6.setString(ingreso6);
                    acumulador+=devolverIngreso(ingreso6);
                    is_pressed6 = false;
                }
            }
        }

        if(utility.clickSprite(back_ingreso1,mouse)){is_pressed1 = true;}
        if(utility.clickSprite(back_ingreso2,mouse)){is_pressed2 = true;}
        if(utility.clickSprite(back_ingreso3,mouse)){is_pressed3 = true;}
        if(utility.clickSprite(back_ingreso4,mouse)){is_pressed4 = true;}
        if(utility.clickSprite(back_ingreso5,mouse)){is_pressed5 = true;}
        if(utility.clickSprite(back_ingreso6,mouse)){is_pressed6 = true;}

        if(!ingreso1.isEmpty()&&!ingreso2.isEmpty()&&!ingreso3.isEmpty()&&!ingreso4.isEmpty()&&!ingreso5.isEmpty()&&!ingreso6.isEmpty()){
            back_enviar.setPosition(470,470);
            if(utility.clickSprite(back_enviar,mouse)){
                window.close();
            }
        }

        txt_Title.setString("APOYO EN EL APRENDIZAJE");
        txt_puntuar.setString("En la casilla ingrese la frecuencia con la que usted \nrealiza las siguientes actividades\nSiempre: 4 puntos\tCasi siempre: 3 puntos\tRegularmente: 2 puntos\nA veces: 1 puntos\tNunca: 0 puntos");
        txt_descripcion.setString(mostrarDescripcion(0,ac_descripcion));

        window.draw(sprite);
        window.draw(txt_Title);
        window.draw(txt_puntuar);
        window.draw(txt_descripcion);
        window.draw(back_ingreso1);
        window.draw(back_ingreso2);
        window.draw(back_ingreso3);
        window.draw(back_ingreso4);
        window.draw(back_ingreso5);
        window.draw(back_ingreso6);
        window.draw(txt_ingreso1);
        window.draw(txt_ingreso2);
        window.draw(txt_ingreso3);
        window.draw(txt_ingreso4);
        window.draw(txt_ingreso5);
        window.draw(txt_ingreso6);
        window.draw(back_blockenviar);
        window.draw(back_enviar);
        window.display();
    }
    return acumulador;
}

VerApoyoAprendizaje::~VerApoyoAprendizaje()
{
    //dtor
}
