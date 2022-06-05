#include "Soare.h"

Soare::Soare(float pos_x, float pos_y)
{
    pos3.x = pos_x;
    pos3.y = pos_y;
    sun.setPosition(pos3);
    //p.setFillColor(sf::Color::Yellow);
    texture.loadFromFile("C:\\Proiect POO v2\\Textures\\soare.jpg");
    sun.setTexture(&texture);
    sun.setRadius(120);
    sun.setRotation(1.f);

}
void Soare::roteste()
{
    if (Keyboard::isKeyPressed(Keyboard::A))
        sun.move(-10.f, 0.f);
    if (Keyboard::isKeyPressed(Keyboard::D))
        sun.move(10.f, 0.f);
    if (Keyboard::isKeyPressed(Keyboard::W))
        sun.move(0.f, -10.f);
    if (Keyboard::isKeyPressed(Keyboard::S))
        sun.move(0.f, 10.f);

    if (Keyboard::isKeyPressed(Keyboard::R))
        sun.rotate(10.f);
}