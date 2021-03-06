//
// Created by Juan Pablo Martínez Brenes, Martin Calderón Blanco, Olman Castro Hernández on 9/5/18
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


    Process *process = new Process[3];

    //Tipos de pizza
    HawaiianPizza hawaiianPizza;
    PepperoniPizza pepperoniPizza;
    VegPizza vegPizza;

    //Textura y Spride del Fondo
    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;

    //Fuente
    sf::Font headFont;
    sf::Text headText;

    //Textura y Sprite de la Pizza Pepperoni
    sf::Texture pepperoniTexture;
    sf::Sprite pepperoniSprite;
    sf::Text pepperoniText;

    //Textura y Sprite de la Pizza Hawaiiana
    sf::Texture hawaiianTexture;
    sf::Sprite hawaiianSprite;
    sf::Text hawaiianText;

    //Textura Y Sprite de la Pizza Vegetariana
    sf::Texture vegTexture;
    sf::Sprite vegSprite;
    sf::Text vegText;

    //Textura y Sprites de las bandas
    sf::Texture bandTexture;
    sf::Sprite band1Sprite;
    sf::Sprite band2Sprite;


    //Textura de los procesos
    //Hawaiian
    sf::Texture hawaiianTexture1;
    sf::Texture hawaiianTexture2;
    sf::Texture hawaiianTexture3;
    sf::Texture hawaiianTexture4;
    sf::Texture hawaiianTexture5;
    sf::Texture hawaiianTexture6;


    //Vegetarian
    sf::Texture vegetarianTexture1;
    sf::Texture vegetarianTexture2;
    sf::Texture vegetarianTexture3;
    sf::Texture vegetarianTexture4;
    sf::Texture vegetarianTexture5;
    sf::Texture vegetarianTexture6;


    //Pepperoni
    sf::Texture pepperoniTexture1;
    sf::Texture pepperoniTexture2;
    sf::Texture pepperoniTexture3;
    sf::Texture pepperoniTexture4;
    sf::Texture pepperoniTexture5;
    sf::Texture pepperoniTexture6;


public:
    Application() {
        // main window
        //Carga de Texturas
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

        //Creacion de la ventana
        window.create(sf::VideoMode(1200, 1600), "PIZZA FACTORY");

        //Carga de texturas para las pizzas, y se les da la posicion
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





        //Ciclo del juego
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
                                    process[i]=pepperoniPizza.CutIngredients();
                                    process[i].sprite.setTexture(pepperoniTexture1);

                                    i+=1;
                                }


                            std::cout << " pepperoni Button pressed" << std::endl;
                        }
                        if (hawaiianButton.getGlobalBounds().contains(
                                window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

                                if(i<=1){
                                    process[i]=hawaiianPizza.CutIngredients();
                                    process[i].sprite.setTexture(hawaiianTexture1);

                                    i+=1;
                                }
                            std::cout << " hawaiian Button pressed" << std::endl;
                        }
                        if (vegButton.getGlobalBounds().contains(
                                window.mapPixelToCoords(sf::Vector2i(event.mouseButton.x, event.mouseButton.y)))) {

                                if(i<=1){
                                    process[i]=vegPizza.CutIngredients();
                                    process[i].sprite.setTexture(vegetarianTexture1);

                                    i+=1;
                                }
                            std::cout << " veg Button pressed" << std::endl;
                        }
                    }

                }
            }




            //Logica de la aplicacion
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
                        process[j].sprite.setPosition(650,process[j].sprite.getPosition().y);
                        process[j].sprite.move(sf::Vector2f(0,10));
                        j++;

                    }
                }



            loopApp();
            if(process[0].sprite.getPosition().y==1500 && process[0].nameProcess=="Cut Ingredients"){

                if(process[0].namePizza=="Hawaiian"){

                    if(i==1){
                        process[0]=hawaiianPizza.PrepareTheDough();
                        process[0].sprite.setTexture(hawaiianTexture2);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=hawaiianPizza.PrepareTheDough();
                        process[i-1].sprite.setTexture(hawaiianTexture2);
                    }

                }else if(process[0].namePizza=="Vegetarian"){
                    if(i==1){
                        process[0]=vegPizza.PrepareTheDough();
                        process[0].sprite.setTexture(vegetarianTexture2);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=vegPizza.PrepareTheDough();
                        process[i-1].sprite.setTexture(vegetarianTexture2);
                    }



                }else if(process[0].namePizza=="Pepperoni"){

                    if(i==1){
                        process[0]=pepperoniPizza.PrepareTheDough();
                        process[0].sprite.setTexture(pepperoniTexture2);
                    }else{

                        for(int k=0; k<i;k++){

                            process[k]=process[k+1];
                        }

                        process[i-1]=pepperoniPizza.PrepareTheDough();
                        process[i-1].sprite.setTexture(pepperoniTexture2);
                    }

                }

            }else if(process[0].sprite.getPosition().y==1500 && process[0].nameProcess=="Prepare The Dough"){
                if(process[0].namePizza=="Hawaiian"){

                    if(i==1){
                        process[0]=hawaiianPizza.TomatoSauce();
                        process[0].sprite.setTexture(hawaiianTexture3);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=hawaiianPizza.TomatoSauce();
                        process[i-1].sprite.setTexture(hawaiianTexture3);
                    }

                }else if(process[0].namePizza=="Vegetarian"){
                    if(i==1){
                        process[0]=vegPizza.TomatoSauce();
                        process[0].sprite.setTexture(vegetarianTexture3);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=vegPizza.TomatoSauce();
                        process[i-1].sprite.setTexture(vegetarianTexture3);
                    }
                }else if(process[0].namePizza=="Pepperoni"){
                    if(i==1){
                        process[0]=pepperoniPizza.TomatoSauce();
                        process[0].sprite.setTexture(pepperoniTexture3);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=pepperoniPizza.TomatoSauce();
                        process[i-1].sprite.setTexture(pepperoniTexture3);
                    }

                }

            }else if(process[0].sprite.getPosition().y==1500 && process[0].nameProcess=="Tomato Sauce"){
                if(process[0].namePizza=="Hawaiian"){

                    if(i==1){
                        process[0]=hawaiianPizza.PlaceCheese();
                        process[0].sprite.setTexture(hawaiianTexture4);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=hawaiianPizza.PlaceCheese();
                        process[i-1].sprite.setTexture(hawaiianTexture4);
                    }

                }else if(process[0].namePizza=="Vegetarian"){
                    if(i==1){
                        process[0]=vegPizza.PlaceChesse();
                        process[0].sprite.setTexture(vegetarianTexture4);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=vegPizza.PlaceChesse();
                        process[i-1].sprite.setTexture(vegetarianTexture4);
                    }
                }else if(process[0].namePizza=="Pepperoni"){
                    if(i==1){
                        process[0]=pepperoniPizza.PlaceChesse();
                        process[0].sprite.setTexture(pepperoniTexture4);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=pepperoniPizza.PlaceChesse();
                        process[i-1].sprite.setTexture(pepperoniTexture4);
                    }

                }

            }else if(process[0].sprite.getPosition().y==1500 && process[0].nameProcess=="Place Cheese"){

                if(process[0].namePizza=="Hawaiian"){

                    if(i==1){
                        process[0]=hawaiianPizza.Cook();
                        process[0].sprite.setTexture(hawaiianTexture5);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=hawaiianPizza.Cook();
                        process[i-1].sprite.setTexture(hawaiianTexture5);
                    }


                }else if(process[0].namePizza=="Vegetarian"){
                    if(i==1){
                        process[0]=vegPizza.PlaceVeg();
                        process[0].sprite.setTexture(vegetarianTexture5);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=vegPizza.PlaceVeg();
                        process[i-1].sprite.setTexture(vegetarianTexture5);
                    }
                }else if(process[0].namePizza=="Pepperoni"){
                    if(i==1){
                        process[0]=pepperoniPizza.PlacePepperoni();
                        process[0].sprite.setTexture(pepperoniTexture5);
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }
                        process[i-1]=pepperoniPizza.PlacePepperoni();
                        process[i-1].sprite.setTexture(pepperoniTexture5);
                    }
                }

            }else if(process[0].sprite.getPosition().y==1500 && (process[0].nameProcess=="Cook Pizza" && process[0].namePizza!="Pepperoni")){
                    if(process[0].namePizza=="Hawaiian"){

                        if(i==1){
                            process[0]=hawaiianPizza.PlacePineapple();
                            process[0].sprite.setTexture(hawaiianTexture6);
                        }else{
                            for(int k=0; k<i;k++){
                                process[k]=process[k+1];
                            }
                            process[i-1]=hawaiianPizza.Cook();
                            process[i-1].sprite.setTexture(hawaiianTexture6);
                        }

                    }
            }else if(process[0].sprite.getPosition().y==1500 && process[0].nameProcess=="Place Pepperoni"){

                    if(process[0].namePizza=="Pepperoni"){
                        if(i==1){
                            process[0]=pepperoniPizza.cook();
                            process[0].sprite.setTexture(pepperoniTexture6);
                        }else{
                            for(int k=0; k<i;k++){
                                process[k]=process[k+1];
                            }
                            process[i-1]=pepperoniPizza.cook();
                            process[i-1].sprite.setTexture(pepperoniTexture6);
                        }


                    }
            }else if(process[0].sprite.getPosition().y==1500 && process[0].nameProcess=="Special Ingredients"){
                    if(process[0].namePizza=="Vegetarian"){
                        if(i==1){
                            process[0]=vegPizza.cook();
                            process[0].sprite.setTexture(vegetarianTexture6);
                        }else{
                            for(int k=0; k<i;k++){
                                process[k]=process[k+1];
                            }
                            process[i-1]=vegPizza.cook();
                            process[i-1].sprite.setTexture(vegetarianTexture6);
                        }
                    }
            }else if(process[0].sprite.getPosition().y==1500){

                    if(i==1){
                        process[0]=process[1];
                        i=0;
                    }else{
                        for(int k=0; k<i;k++){
                            process[k]=process[k+1];
                        }i=-1;
                    };

            }

                sf::sleep(sf::milliseconds(100));
        }

    }

    /*
     * Llama al metodo draw para pintar los sprites
     */
    void loopApp() {
        draw();
    }
    /*
     * Limpia la pantalla
     * Pinta cada uno de los Sprites
     * Muestra la pantalla
     */
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

                window.draw(process[j].sprite);
                j++;
            }

        }
        window.display();
    }

};