#pragma once
#include "Planeta.h"
class Cometa :
    public Planeta
{
    Vector2f pos2;
    CircleShape dr;
    Vector2f viteza;
    Texture texture;
public:
    Cometa(float pos_x, float pos_y, float vit_x, float vit_y);
    void render(RenderWindow& obj);
    void Interactiune2(Planeta& p);

};

