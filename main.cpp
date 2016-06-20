#include <SFML/Graphics.hpp>
#include "VerApoyoAprendizaje.h"
#include "Aspecto.h"
#include <iostream>

using namespace std;

int main()
{
    Aspecto *aspecto;
    ApoyoAprendizaje apoyoAprendizaje;
    aspecto = &apoyoAprendizaje;

    VerApoyoAprendizaje verApoyoAprendizaje;

    aspecto->setPuntos(verApoyoAprendizaje.ventana());
    cout<<aspecto->getPuntos()<<endl;

//    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Green);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }

    return 0;
}
