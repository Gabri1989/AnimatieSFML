#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Soare
{
    Vector2f pos3; 
    CircleShape sun;
    Texture texture;
public:
    Soare(float pos_x, float pos_y);
   
    void render(RenderWindow& obj1)
    {
        obj1.draw(sun);

    }
    void roteste();

};

