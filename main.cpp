#include <SFML/Graphics.hpp>

#include "Planeta.h"
#include "Satelit.h"
#include "Racheta.h"
#include "Cometa.h"
#include "Soare.h"

int main()
{
    RenderWindow window(VideoMode(1920, 1024), "SPACE");
    window.setFramerateLimit(60);
    Font font;
    
    font.loadFromFile("C:\\Proiect POO v2\\Lista fonturi\\Italic.ttf");
    Text txt1,txt2,txt3; 
    txt1.setFont(font);
    txt2.setFont(font);
    txt2.setPosition( Vector2f(10.f, 30.f));
    txt3.setFont(font);
    txt3.setPosition(Vector2f(10.f, 60.f));
    txt1.setString(" 1 - Luna (mare)");
    txt2.setString("2 - Asteroid (mediu)");
    txt3.setString("3 - Cometa (mic)");
    Soare sor(1600, 100);
    Planeta sursa1(800, 500, 7000);
    Planeta sursa2(800, 500, 4000);
    Planeta sursa3(800, 500, 3500);
    Satelit sat(800, 700, 5, 0);
    Asteroid rak(750, 700, 5, 0);
    Cometa cmt(830, 700, 5, 0);
    Texture t;
    t.loadFromFile("C:\\Proiect POO v2\\Textures\\background.jpg");
    Sprite s(t);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed) window.close();
           
            if (Keyboard::isKeyPressed(Keyboard::Escape)) window.close();
        }
        sor.roteste();
        window.clear();
        window.draw(s); 
        sat.Interactiune(sursa1);
        rak.Interactiune2(sursa2);
        cmt.Interactiune2(sursa3);
        sursa1.render(window);
        sursa2.render(window);
        sursa3.render(window);
        sat.render(window);
        rak.render(window);
        cmt.render(window);
        sor.render(window);
        window.draw(txt1);
        window.draw(txt2);
        window.draw(txt3);
        window.display();
    }

    return 0;
}