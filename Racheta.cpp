#include "Racheta.h"

Asteroid::Asteroid(float pos_x, float pos_y, float vit_x, float vit_y)
{
    pos2.x = pos_x;
    pos2.y = pos_y;
    viteza.x = vit_x;
    viteza.y = vit_y;
    dr.setRadius(10);
    //dr.setFillColor(Color::Blue);
    texture.loadFromFile("C:\\Proiect POO v2\\Textures\\bila.jpg");
    dr.setTexture(&texture);

}
void Asteroid::Interactiune2(Planeta& p)
{
    float dist_x = p.get_pos().x - pos2.x;
    float dist_y = p.get_pos().y - pos2.y;
    float distanta = sqrt(dist_x * dist_x + dist_y * dist_y);
    float invers_dist = 1.f / distanta; // inversul distantei

    float normal_x = invers_dist * dist_x; // inmultire distanta dintre corpuri si inversul distantei 
    float normal_y = invers_dist * dist_y;

    float invers_patrat = invers_dist * invers_dist;
    const double G = 6.673e-11;
    float acceleratie_x = normal_x * p.getPutere() * invers_patrat;
    float acceleratie_y = normal_y * p.getPutere() * invers_patrat;

    viteza.x += acceleratie_x;
    viteza.y += acceleratie_y;

    pos2.x += viteza.x;
    pos2.y += viteza.y;

}
