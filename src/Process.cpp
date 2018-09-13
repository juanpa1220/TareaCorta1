//
// Created by Juan Pablo Martínez Brenes, Martin Calderón Blanco, Olman Castro Hernández on 9/5/18
//
#ifndef Process_Here
#define Process_Here


#include "iostream"
#include <SFML/Graphics.hpp>

//Clase Proceso
class Process{
public:
    //Atributos de la clase Process
    std::string nameProcess;
    sf::Sprite  sprite;
    std::string namePizza;
    int size;

public:
    /**
     * Constructor de la clase
     */
    Process(){

    }
    /**
     * Constructor de la clase con parametros
     * @param n Nombre del Proceso
     * @param size  tamaño en Y del proceso
     * @param nP Nombre de la Pizza
     */
    Process(std::string n, int size, std::string nP){
        this->nameProcess=n;
        this->size=size;
        this->namePizza=nP;
    }
};
#endif