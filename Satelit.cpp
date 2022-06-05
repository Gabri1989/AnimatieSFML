#include "Satelit.h"

Satelit::Satelit(float pos_x, float pos_y, float vit_x, float vit_y)
{
    pos.x = pos_x;
    pos.y = pos_y;
    viteza.x = vit_x;
    viteza.y = vit_y;
    
    s.setPosition(pos);
    //s.setFillColor(sf::Color::White);
    s.setRadius(14);

    texture.loadFromFile("C:\\Proiect POO v2\\Textures\\corp.jpg");
    s.setTexture(&texture);
    

}

void Satelit::Interactiune(Planeta& p) // dinamica satelitului cu planeta
{
    float dist_x = p.get_pos().x - pos.x; // diferenta dintre [planeta si asteroid]
    float dist_y = p.get_pos().y - pos.y;

    float distanta = sqrt(dist_x * dist_x + dist_y * dist_y); // teorema pitagora

    float invers_dist = 1.f / distanta; // inversul distantei

    float normal_x = invers_dist * dist_x; // vector de lungime 1 avand sursa in satelit si destinatia in planeta 
    float normal_y = invers_dist * dist_y; 

    float invers_patrat = invers_dist * invers_dist; // distanta la patrat
 
    float acceleratie_x = normal_x * p.getPutere() * invers_patrat; // functia getPutere se comporta ca o sursa de 
    float acceleratie_y = normal_y * p.getPutere() * invers_patrat; //atractie primara pentru corpurile din jur
    // forta de atractie depinde de distanta dintre doua corpuri
    viteza.x += acceleratie_x; // aplicare accleratie vitezei satelitului
    viteza.y += acceleratie_y;

    pos.x += viteza.x; // aplicare viteza pozitiei satelitului
    pos.y += viteza.y;

}

void Satelit::render(RenderWindow& obj)
{
    s.setPosition(pos);
    obj.draw(s);
    
    
}