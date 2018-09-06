//
// Created by Juan Pablo Martínez Brenes on 9/5/18.
//
#include "iostream"
#include "Application.h"
#include <SFML/Graphics.hpp>

class Application {
private:
    sf::RenderWindow window;

    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;

    sf::Font headFont;
    sf::Text headText;

    sf::Texture pepperoniTexture;
    sf::Sprite pepperoniSprite;
    sf::Text pepperoniText;

    sf::Texture hawaiianTexture;
    sf::Sprite hawaiianSprite;
    sf::Text hawaiianText;

    sf::Texture vegTexture;
    sf::Sprite vegSprite;
    sf::Text vegText;
public:
    Application() {
        // main window
        window.create(sf::VideoMode(1200, 1600), "PIZZA FACTORY");

        // background image
        backgroundTexture.loadFromFile(
                "/Users/juanpablomartinezbrenes/Documents/ITCR/CE-2103/TareaCorta1/res/img/background.jpg");
        backgroundSprite.setTexture(backgroundTexture);

        // pizza images
        pepperoniTexture.loadFromFile(
                "/Users/juanpablomartinezbrenes/Documents/ITCR/CE-2103/TareaCorta1/res/img/pepperoniPizza.png");
        pepperoniSprite.setTexture(pepperoniTexture);
        pepperoniSprite.setPosition(50, 200);

        hawaiianTexture.loadFromFile(
                "/Users/juanpablomartinezbrenes/Documents/ITCR/CE-2103/TareaCorta1/res/img/hawaiianPizza.png");
        hawaiianSprite.setTexture(hawaiianTexture);
        hawaiianSprite.setPosition(50, 600);

        vegTexture.loadFromFile(
                "/Users/juanpablomartinezbrenes/Documents/ITCR/CE-2103/TareaCorta1/res/img/vegPizza.png");
        vegSprite.setTexture(vegTexture);
        vegSprite.setPosition(50, 1000);


        // buttons over pizza images
        sf::RectangleShape pepperoniButton;
        pepperoniButton.setSize(sf::Vector2f(300.0f, 300.0f));
        pepperoniButton.setPosition(50.0f, 200.0f);

        sf::RectangleShape hawaiianButton;
        hawaiianButton.setSize(sf::Vector2f(300.0f, 300.0f));
        hawaiianButton.setPosition(50.0f, 600.0f);

        sf::RectangleShape vegButton;
        vegButton.setSize(sf::Vector2f(300.0f, 300.0f));
        vegButton.setPosition(50.0f, 1000.0f);

        // text and fonts
        headFont.loadFromFile(
                "/Users/juanpablomartinezbrenes/Documents/ITCR/CE-2103/TareaCorta1/res/font/font.TTF");
        headText.setFont(headFont);
        headText.setString("PRESS A PIZZA\nTO COOK IT");
        headText.setCharacterSize(40);
        headText.setColor(sf::Color::White);
        headText.setPosition(50, 50);

        pepperoniText.setFont(headFont);
        pepperoniText.setString("PEPPERONI");
        pepperoniText.setCharacterSize(30);
        pepperoniText.setColor(sf::Color::Black);
        pepperoniText.setPosition(75, 480);

        hawaiianText.setFont(headFont);
        hawaiianText.setString("HAWAIIAN");
        hawaiianText.setCharacterSize(30);
        hawaiianText.setColor(sf::Color::Black);
        hawaiianText.setPosition(90, 885);

        vegText.setFont(headFont);
        vegText.setString("VEGETARIAN");
        vegText.setCharacterSize(30);
        vegText.setColor(sf::Color::Black);
        vegText.setPosition(60, 1315);

        while (window.isOpen()) {
            sf::Event event{};

            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }
                if (event.type == sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left) {

                        // mouse inputs
                        if (pepperoniButton.getGlobalBounds().contains(
                                window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
                            std::cout << " pepperoni Button pressed" << std::endl;
                        }
                        if (hawaiianButton.getGlobalBounds().contains(
                                window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
                            std::cout << " hawaiian Button pressed" << std::endl;
                        }
                        if (vegButton.getGlobalBounds().contains(
                                window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {
                            std::cout << " veg Button pressed" << std::endl;
                        }
                    }

                }
            }
            loopApp();
        }
    }

    void loopApp() {
        draw();
    }

    void draw() {
        window.clear();

        window.draw(backgroundSprite);
        window.draw(pepperoniSprite);
        window.draw(hawaiianSprite);
        window.draw(vegSprite);
        window.draw(headText);
        window.draw(pepperoniText);
        window.draw(hawaiianText);
        window.draw(vegText);

        window.display();
    }

};