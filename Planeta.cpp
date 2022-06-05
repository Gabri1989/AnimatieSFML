#include "Planeta.h"
Planeta::Planeta(float pos_x, float pos_y, float masa)
{
    pos.x = pos_x;
    pos.y = pos_y;
    this->masa = masa;

    p.setPosition(pos);
    //p.setFillColor(sf::Color::White);
    texture.loadFromFile("C:\\Proiect POO v2\\Textures\\earth.jpg");
    p.setTexture(&texture);
    p.setRadius(70);
    p.move(Vector2f(0.5f, 0.2f));
    p.setRotation(50.f);
}