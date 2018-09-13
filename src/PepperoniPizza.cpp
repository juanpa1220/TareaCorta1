
#include <SFML/Graphics.hpp>
#include "Process.cpp"

class PepperoniPizza{


public:
    PepperoniPizza(){

    }
    Process CutIngredients(){
        Process cut("Cut Ingredients",200,"Pepperoni");
        return cut;
    }
    Process PrepareTheDough(){
        Process pdt("Prepare The Dough",300,"Pepperoni");
        return pdt;
    }
    Process TomatoSauce(){
        Process ts = Process("Tomato Sauce",100,"Pepperoni");
        return ts;
    }

    Process PlaceChesse(){
        Process pc=Process("Place Cheese",100,"Pepperoni");
        return pc;
    }
    Process cook(){
        Process c = Process("Cook Pizza",300,"Pepperoni");
        return c;
    }
    Process PlacePepperoni(){
        Process pp= Process("Place Pepperoni",100,"Pepperoni");
        return pp;
    }
};
