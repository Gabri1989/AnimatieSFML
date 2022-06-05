#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Planeta
{
        Vector2f pos; //pozitia planetei 
        float masa;
        CircleShape p;
        Texture texture;

    public:
        Planeta(float pos_x, float pos_y, float putere);
 
        Planeta()
        {
        };
        void render(RenderWindow& obj) // deseneaza planeta
        {   
            obj.draw(p);

        }

        Vector2f get_pos()
        {
            return pos;
        }

        float getPutere()
        {
            return masa;
        }
    

};

