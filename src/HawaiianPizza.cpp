//
// Created by Juan Pablo Martínez Brenes, Martin Calderón Blanco, Olman Castro Hernández on 9/5/18
//



#include "Process.cpp"
#include <SFML/Graphics.hpp>
//Clase pizza Hawaiiana
class HawaiianPizza {

public:
    /**
     * Constructor de la classe
     */
    HawaiianPizza(){

    }

    /**
     * Crear un proceso para cortar ingredientes
     * @return Process proceso
     */
    Process CutIngredients(){
        Process  cutI("Cut Ingredients",200,"Hawaiian");
        return  cutI;

    }
    /**
     * Crear un proceso para preparar la masa
     * @return Process proceso
     */
    Process PrepareTheDough(){
        Process  ptd("Prepare The Dough",300,"Hawaiian");
        return  ptd;

    }
    /**
     * Crear un proceso para colocar la salsa de tomate
     * @return Process proceso
     */
    Process TomatoSauce(){
        Process ts= Process("Tomato Sauce",100,"Hawaiian");
        return ts;
    }
    /**
    * Crear un proceso para colocar el queso
    * @return Process proceso
    */
    Process PlaceCheese(){
        Process pc=Process("Place Cheese",100,"Hawaiian");
        return pc;
    }

    /**
    * Crear un proceso para cocinar la pizza
    * @return Process proceso
    */
    Process Cook(){
        Process c= Process("Cook Pizza",300,"Hawaiian");
        return c;
    }

    /**
    * Crear un proceso para colocar la piña
    * @return Process proceso
    */
    Process PlacePineapple(){
        Process pp= Process("Place Pineapple",100,"Hawaiian");
        return pp;
    }

};