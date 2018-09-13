//
// Created by gaburolo on 05/09/18.
//

#ifndef Process_Here
#define Process_Here

#include "iostream"
#include <SFML/Graphics.hpp>
class Process{
public:
    std::string nameProcess;
    sf::Sprite  sprite;
    std::string namePizza;
    int size;
    int y;
public:
    Process(){

    }
    Process(std::string n, int size, std::string nP){
        this->nameProcess=n;
        this->size=size;
        this->namePizza=nP;
    }
};
#endif