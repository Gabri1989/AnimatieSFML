#pragma once
#include "Planeta.h"
class Asteroid : public Planeta
{
    Vector2f pos2; 
    CircleShape dr;
    Vector2f viteza;
    Texture texture;
public:
    Asteroid(float pos_x, float pos_y, float vit_x, float vit_y);

    void render(RenderWindow& obj) 
    {
        dr.setPosition(pos2);
        obj.draw(dr);
    }
    void Interactiune2(Planeta& p);
   

};

