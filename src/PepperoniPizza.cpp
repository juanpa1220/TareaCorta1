//
// Created by Juan Pablo Martínez Brenes, Martin Calderón Blanco, Olman Castro Hernández on 9/5/18
//




#include <SFML/Graphics.hpp>
#include "Process.cpp"
//Clase pizza peperoni
class PepperoniPizza{


public:
    /**
     * Constructor de la classe
     */
    PepperoniPizza(){

    }

    /**
     * Crear un proceso para cortar ingredientes
     * @return Process proceso
     */
    Process CutIngredients(){
        Process cut("Cut Ingredients",200,"Pepperoni");
        return cut;
    }
    /**
     * Crear un proceso para preparar la masa
     * @return Process proceso
     */
    Process PrepareTheDough(){
        Process pdt("Prepare The Dough",300,"Pepperoni");
        return pdt;
    }
    /**
     * Crear un proceso para colocar la salsa de tomate
     * @return Process proceso
     */
    Process TomatoSauce(){
        Process ts = Process("Tomato Sauce",100,"Pepperoni");
        return ts;
    }
    /**
    * Crear un proceso para colocar el queso
    * @return Process proceso
    */
    Process PlaceChesse(){
        Process pc=Process("Place Cheese",100,"Pepperoni");
        return pc;
    }

    /**
    * Crear un proceso para cocinar la pizza
    * @return Process proceso
    */
    Process cook(){
        Process c = Process("Cook Pizza",300,"Pepperoni");
        return c;
    }
    /**
    * Crear un proceso para colocar el pepperoni
    * @return Process proceso
    */
    Process PlacePepperoni(){
        Process pp= Process("Place Pepperoni",100,"Pepperoni");
        return pp;
    }
};
