#include "VerComunicacion.h"

VerComunicacion::VerComunicacion()
{
    //ctor
}

void VerComunicacion::llenarDescripcion()
{
    descripcion[0]="1. Conozco a sus amigos..........\n";
    descripcion[1]="2. Cuando discutimos, al final le demuestro\n    que lo quiero..........\n";
    descripcion[2]="3. Tomo en cuenta su opinion cuando\n    me da una sugerencia.........\n";
    descripcion[3]="4. Cuando discutimos, siempre\n    lo hago con calma..........\n";
    descripcion[4]="5. Siempre resalto sus cualidades y nunca hablo\n    mal de el enfrente de terceras personas..........\n";
}

string VerComunicacion::mostrarDescripcion(int c,string ac_descripcion)
{
    if(c < 5){
        ac_descripcion+=descripcion[c]+"\n";
        return mostrarDescripcion(c+1,ac_descripcion);
    }
    return ac_descripcion;
}

int VerComunicacion::devolverIngreso(sf::String ingreso)
{
    string convert;
    convert = ingreso;
    return atoi(convert.c_str());
}

int VerComunicacion::ventana()
{
    sf::RenderWindow window;
    sf::Texture texture, text_ingreso1, text_ingreso2, text_ingreso3, text_ingreso4, text_ingreso5, text_enviar,text_blockenviar;
    sf::Sprite sprite, back_ingreso1, back_ingreso2, back_ingreso3, back_ingreso4, back_ingreso5, back_enviar,back_blockenviar;
    sf::Text txt_Title, txt_puntuar, txt_descripcion, txt_ingreso1, txt_ingreso2, txt_ingreso3, txt_ingreso4, txt_ingreso5;
    sf::Font font;
    sf::Vector2f mouse;
    sf::String ingreso1, ingreso2, ingreso3, ingreso4, ingreso5;
    bool is_pressed1 = false,is_pressed2 = false,is_pressed3 = false,is_pressed4 = false,is_pressed5 = false;
    string convert, ac_descripcion="";
    int acumulador=0;

    window.create(sf::VideoMode(650, 550), "Atención y Tiempo Compartido");
    window.setPosition(sf::Vector2i(0,0));
    font.loadFromFile("arial.ttf");

    texture.loadFromFile("ventanas/background1.png");
    sprite.setTexture(texture);
    text_ingreso1.loadFromFile("ventanas/ingreso.png");
    back_ingreso1.setTexture(text_ingreso1);
    back_ingreso1.setPosition(500,160);
    text_ingreso2.loadFromFile("ventanas/ingreso.png");
    back_ingreso2.setTexture(text_ingreso2);
    back_ingreso2.setPosition(500,225);
    text_ingreso3.loadFromFile("ventanas/ingreso.png");
    back_ingreso3.setTexture(text_ingreso3);
    back_ingreso3.setPosition(500,285);
    text_ingreso4.loadFromFile("ventanas/ingreso.png");
    back_ingreso4.setTexture(text_ingreso4);
    back_ingreso4.setPosition(500,350);
    text_ingreso5.loadFromFile("ventanas/ingreso.png");
    back_ingreso5.setTexture(text_ingreso5);
    back_ingreso5.setPosition(500,415);
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
    txt_Title.setPosition(180,30);
    txt_ingreso1.setFont(font);txt_ingreso1.setCharacterSize(20);txt_ingreso1.setColor(sf::Color::Black);txt_ingreso1.setPosition(505,163);
    txt_ingreso2.setFont(font);txt_ingreso2.setCharacterSize(20);txt_ingreso2.setColor(sf::Color::Black);txt_ingreso2.setPosition(505,228);
    txt_ingreso3.setFont(font);txt_ingreso3.setCharacterSize(20);txt_ingreso3.setColor(sf::Color::Black);txt_ingreso3.setPosition(505,288);
    txt_ingreso4.setFont(font);txt_ingreso4.setCharacterSize(20);txt_ingreso4.setColor(sf::Color::Black);txt_ingreso4.setPosition(505,353);
    txt_ingreso5.setFont(font);txt_ingreso5.setCharacterSize(20);txt_ingreso5.setColor(sf::Color::Black);txt_ingreso5.setPosition(505,418);

    llenarDescripcion();

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
                    acumulador+=devolverIngreso(ingreso2)+1;
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
                    acumulador+=devolverIngreso(ingreso5)+1;
                    is_pressed5 = false;
                }
            }
        }

        if(utility.clickSprite(back_ingreso1,mouse)){is_pressed1 = true;}
        if(utility.clickSprite(back_ingreso2,mouse)){is_pressed2 = true;}
        if(utility.clickSprite(back_ingreso3,mouse)){is_pressed3 = true;}
        if(utility.clickSprite(back_ingreso4,mouse)){is_pressed4 = true;}
        if(utility.clickSprite(back_ingreso5,mouse)){is_pressed5 = true;}

        if(!ingreso1.isEmpty()&&!ingreso2.isEmpty()&&!ingreso3.isEmpty()&&!ingreso4.isEmpty()&&!ingreso5.isEmpty()){
            back_enviar.setPosition(470,470);
            if(utility.clickSprite(back_enviar,mouse)){
                window.close();
            }
        }

        txt_Title.setString("COMUNICACIÓN");
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
        window.draw(txt_ingreso1);
        window.draw(txt_ingreso2);
        window.draw(txt_ingreso3);
        window.draw(txt_ingreso4);
        window.draw(txt_ingreso5);
        window.draw(back_blockenviar);
        window.draw(back_enviar);
        window.display();
    }
    return acumulador;
}

VerComunicacion::~VerComunicacion()
{
    //dtor
}
