//
// Created by Juan Pablo Martínez Brenes on 9/5/18.
//
#include "iostream"
#include "Application.h"
#include <SFML/Graphics.hpp>
#include "HawaiianPizza.cpp"
#include "Lista.cpp"
#include "PepperoniPizza.cpp"
#include "VegPizza.cpp"
class Application {
private:
    int i = 0;
    sf::RenderWindow window;


    Process *prueba = new Process[2];

    HawaiianPizza hawaiianPizza;
    PepperoniPizza pepperoniPizza;
    VegPizza vegPizza;

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

    sf::Texture bandTexture;
    sf::Sprite band1Sprite;
    sf::Sprite band2Sprite;
    int Y=0;

    //Textura de los procesos
    sf::Texture hawaiianTexture1;
    sf::Texture hawaiianTexture2;
    sf::Texture hawaiianTexture3;
    sf::Texture hawaiianTexture4;
    sf::Texture hawaiianTexture5;
    sf::Texture hawaiianTexture6;

    sf::Texture vegetarianTexture1;
    sf::Texture vegetarianTexture2;
    sf::Texture vegetarianTexture3;
    sf::Texture vegetarianTexture4;
    sf::Texture vegetarianTexture5;
    sf::Texture vegetarianTexture6;

    sf::Texture pepperoniTexture1;
    sf::Texture pepperoniTexture2;
    sf::Texture pepperoniTexture3;
    sf::Texture pepperoniTexture4;
    sf::Texture pepperoniTexture5;
    sf::Texture pepperoniTexture6;
public:
    Application() {
        // main window

        hawaiianTexture1.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Hawaiian/HawaiianCI.png");
        hawaiianTexture2.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Hawaiian/HawaiianPTD.png");
        hawaiianTexture3.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Hawaiian/HawaiianTS.png");
        hawaiianTexture4.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Hawaiian/HawaiianPC.png");
        hawaiianTexture5.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Hawaiian/HawaiianC.png");
        hawaiianTexture6.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Hawaiian/HawaiianPP.png");

        vegetarianTexture1.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Vegetarian/VegetarianCI.png");
        vegetarianTexture2.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Vegetarian/VegetarianPTD.png");
        vegetarianTexture3.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Vegetarian/VegetarianTS.png");
        vegetarianTexture4.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Vegetarian/VegetarianPC.png");
        vegetarianTexture5.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Vegetarian/VegetarianSI.png");
        vegetarianTexture6.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Vegetarian/VegetarianC.png");


        pepperoniTexture1.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Pepperoni/PepperonCI.png");
        pepperoniTexture2.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Pepperoni/PepperonPTD.png");
        pepperoniTexture3.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Pepperoni/PepperonTS.png");
        pepperoniTexture4.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Pepperoni/PepperonPC.png");
        pepperoniTexture5.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Pepperoni/PepperonPP.png");
        pepperoniTexture6.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/Pepperoni/PepperonC.png");

        window.create(sf::VideoMode(1200, 1600), "PIZZA FACTORY");

        // background image
        backgroundTexture.loadFromFile(
                "/home/gaburolo/CLionProjects/TareaCorta1/res/img/background.jpg");
        backgroundSprite.setTexture(backgroundTexture);

        // pizza images
        pepperoniTexture.loadFromFile(
                "/home/gaburolo/CLionProjects/TareaCorta1/res/img/pepperoniPizza.png");
        pepperoniSprite.setTexture(pepperoniTexture);
        pepperoniSprite.setPosition(50, 200);





        hawaiianTexture.loadFromFile(
                "/home/gaburolo/CLionProjects/TareaCorta1/res/img/hawaiianPizza.png");
        hawaiianSprite.setTexture(hawaiianTexture);
        hawaiianSprite.setPosition(50, 600);

        vegTexture.loadFromFile(
                "/home/gaburolo/CLionProjects/TareaCorta1/res/img/vegPizza.png");
        vegSprite.setTexture(vegTexture);
        vegSprite.setPosition(50, 1000);

        bandTexture.loadFromFile("/home/gaburolo/CLionProjects/TareaCorta1/res/img/band.png");
        band1Sprite.setTexture(bandTexture);
        band1Sprite.setPosition(700, -1600);
        band2Sprite.setTexture(bandTexture);
        band2Sprite.setPosition(700, 0);


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
                "/home/gaburolo/CLionProjects/TareaCorta1/res/font/font.TTF");
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
                                if(i<=1){
                                    prueba[i]=pepperoniPizza.CutIngredients();
                                    prueba[i].sprite.setTexture(pepperoniTexture1);

                                    i+=1;
                                }


                            std::cout << " pepperoni Button pressed" << std::endl;
                        }
                        if (hawaiianButton.getGlobalBounds().contains(
                                window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

                                if(i<=1){
                                    prueba[i]=hawaiianPizza.CutIngredients();
                                    prueba[i].sprite.setTexture(hawaiianTexture1);

                                    i+=1;
                                }
                            std::cout << " hawaiian Button pressed" << std::endl;
                        }
                        if (vegButton.getGlobalBounds().contains(
                                window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

                                if(i<=1){
                                    prueba[i]=vegPizza.CutIngredients();
                                    prueba[i].sprite.setTexture(vegetarianTexture1);

                                    i+=1;
                                }
                            std::cout << " veg Button pressed" << std::endl;
                        }
                    }

                }
            }
            loopApp();
            if (band1Sprite.getPosition().y >= 1600) {
                band1Sprite.setPosition(700, -1600);
            }if (band2Sprite.getPosition().y >= 1600){
                band2Sprite.setPosition(700, -1600);
            }
            band1Sprite.move(sf::Vector2f(0, 10));
            band2Sprite.move(sf::Vector2f(0, 10));






                if (i>=1){

                    int j=0;
                    while(j<i){
                        prueba[j].sprite.setPosition(650,prueba[j].sprite.getPosition().y);
                        prueba[j].sprite.move(sf::Vector2f(0,10));
                        j++;

                    }
                }
            if(prueba[0].sprite.getPosition().y==1500 && prueba[0].nameProcess=="Cut Ingredients"){

                if(prueba[0].namePizza=="Hawaiian"){

                    if(i==1){
                        prueba[0]=hawaiianPizza.PrepareTheDough();
                        prueba[0].sprite.setTexture(hawaiianTexture2);
                    }else{
                        for(int k=0; k<=i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=hawaiianPizza.PrepareTheDough();
                        prueba[i-1].sprite.setTexture(hawaiianTexture2);
                    }

                }else if(prueba[0].namePizza=="Vegetarian"){
                    if(i==1){
                        prueba[0]=vegPizza.PrepareTheDough();
                        prueba[0].sprite.setTexture(vegetarianTexture2);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=vegPizza.PrepareTheDough();
                        prueba[i-1].sprite.setTexture(vegetarianTexture2);
                    }



                }else if(prueba[0].namePizza=="Pepperoni"){

                    if(i==1){
                        prueba[0]=pepperoniPizza.PrepareTheDough();
                        prueba[0].sprite.setTexture(pepperoniTexture2);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=pepperoniPizza.PrepareTheDough();
                        prueba[i-1].sprite.setTexture(pepperoniTexture2);
                    }

                }

            }else if(prueba[0].sprite.getPosition().y==1500 && prueba[0].nameProcess=="Prepare The Dough"){
                if(prueba[0].namePizza=="Hawaiian"){

                    if(i==1){
                        prueba[0]=hawaiianPizza.TomatoSauce();
                        prueba[0].sprite.setTexture(hawaiianTexture3);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=hawaiianPizza.TomatoSauce();
                        prueba[i-1].sprite.setTexture(hawaiianTexture3);
                    }

                }else if(prueba[0].namePizza=="Vegetarian"){
                    if(i==1){
                        prueba[0]=vegPizza.TomatoSauce();
                        prueba[0].sprite.setTexture(vegetarianTexture3);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=vegPizza.TomatoSauce();
                        prueba[i-1].sprite.setTexture(vegetarianTexture3);
                    }
                }else if(prueba[0].namePizza=="Pepperoni"){
                    if(i==1){
                        prueba[0]=pepperoniPizza.TomatoSauce();
                        prueba[0].sprite.setTexture(pepperoniTexture3);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=pepperoniPizza.TomatoSauce();
                        prueba[i-1].sprite.setTexture(pepperoniTexture3);
                    }

                }

            }else if(prueba[0].sprite.getPosition().y==1500 && prueba[0].nameProcess=="Tomato Sauce"){
                if(prueba[0].namePizza=="Hawaiian"){

                    if(i==1){
                        prueba[0]=hawaiianPizza.PlaceCheese();
                        prueba[0].sprite.setTexture(hawaiianTexture4);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=hawaiianPizza.PlaceCheese();
                        prueba[i-1].sprite.setTexture(hawaiianTexture4);
                    }

                }else if(prueba[0].namePizza=="Vegetarian"){
                    if(i==1){
                        prueba[0]=vegPizza.PlaceChesse();
                        prueba[0].sprite.setTexture(vegetarianTexture4);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=vegPizza.PlaceChesse();
                        prueba[i-1].sprite.setTexture(vegetarianTexture4);
                    }Y=0;
                }else if(prueba[0].namePizza=="Pepperoni"){
                    if(i==1){
                        prueba[0]=pepperoniPizza.PlaceChesse();
                        prueba[0].sprite.setTexture(pepperoniTexture4);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=pepperoniPizza.PlaceChesse();
                        prueba[i-1].sprite.setTexture(pepperoniTexture4);
                    }

                }

            }else if(prueba[0].sprite.getPosition().y==1500 && prueba[0].nameProcess=="Place Cheese"){

                if(prueba[0].namePizza=="Hawaiian"){

                    if(i==1){
                        prueba[0]=hawaiianPizza.Cook();
                        prueba[0].sprite.setTexture(hawaiianTexture5);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=hawaiianPizza.Cook();
                        prueba[i-1].sprite.setTexture(hawaiianTexture5);
                    }


                }else if(prueba[0].namePizza=="Vegetarian"){
                    if(i==1){
                        prueba[0]=vegPizza.PlaceVeg();
                        prueba[0].sprite.setTexture(vegetarianTexture5);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=vegPizza.PlaceVeg();
                        prueba[i-1].sprite.setTexture(vegetarianTexture5);
                    }
                }else if(prueba[0].namePizza=="Pepperoni"){
                    if(i==1){
                        prueba[0]=pepperoniPizza.PlacePepperoni();
                        prueba[0].sprite.setTexture(pepperoniTexture5);
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                        prueba[i-1]=pepperoniPizza.PlacePepperoni();
                        prueba[i-1].sprite.setTexture(pepperoniTexture5);
                    }
                }

            }else if(prueba[0].sprite.getPosition().y==1500 && (prueba[0].nameProcess=="Cook Pizza" && prueba[0].namePizza!="Pepperoni")){
                    if(prueba[0].namePizza=="Hawaiian"){

                        if(i==1){
                            prueba[0]=hawaiianPizza.PlacePineapple();
                            prueba[0].sprite.setTexture(hawaiianTexture6);
                        }else{
                            for(int k=0; k<i;k++){
                                prueba[k]=prueba[k+1];
                            }
                            prueba[i-1]=hawaiianPizza.Cook();
                            prueba[i-1].sprite.setTexture(hawaiianTexture6);
                        }

                    }
            }else if(prueba[0].sprite.getPosition().y==1500 && prueba[0].nameProcess=="Place Pepperoni"){

                    if(prueba[0].namePizza=="Pepperoni"){
                        if(i==1){
                            prueba[0]=pepperoniPizza.cook();
                            prueba[0].sprite.setTexture(pepperoniTexture6);
                        }else{
                            for(int k=0; k<i;k++){
                                prueba[k]=prueba[k+1];
                            }
                            prueba[i-1]=pepperoniPizza.cook();
                            prueba[i-1].sprite.setTexture(pepperoniTexture6);
                        }


                    }
            }else if(prueba[0].sprite.getPosition().y==1500 && prueba[0].nameProcess=="Special Ingredients"){
                    if(prueba[0].namePizza=="Vegetarian"){
                        if(i==1){
                            prueba[0]=vegPizza.cook();
                            prueba[0].sprite.setTexture(vegetarianTexture6);
                        }else{
                            for(int k=0; k<i;k++){
                                prueba[k]=prueba[k+1];
                            }
                            prueba[i-1]=vegPizza.cook();
                            prueba[i-1].sprite.setTexture(vegetarianTexture6);
                        }
                    }
            }else if(prueba[0].sprite.getPosition().y==1500){

                    if(i==1){
                        prueba[0]=prueba[1];
                    }else{
                        for(int k=0; k<i;k++){
                            prueba[k]=prueba[k+1];
                        }
                    }i=0;

            }

                sf::sleep(sf::milliseconds(100));
        }

    }


    void loopApp() {
        draw();
    }

    void draw() {

        window.clear();
        int j=0;
        window.draw(backgroundSprite);
        window.draw(pepperoniSprite);
        window.draw(hawaiianSprite);
        window.draw(vegSprite);
        window.draw(headText);
        window.draw(pepperoniText);
        window.draw(hawaiianText);
        window.draw(vegText);
        window.draw(band1Sprite);
        window.draw(band2Sprite);
        if (i>=1){
            while(j<i){

                window.draw(prueba[j].sprite);
                j++;
            }

        }
        window.display();
    }

};