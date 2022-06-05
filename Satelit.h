#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
#include "Planeta.h"
class Satelit
{
    Vector2f pos;
    Vector2f viteza;
    CircleShape s;
    Texture texture;

public:
    Satelit(float pos_x, float pos_y, float vit_x, float vit_y);

    void render(RenderWindow& obj);
    void Interactiune(Planeta& p);
};

