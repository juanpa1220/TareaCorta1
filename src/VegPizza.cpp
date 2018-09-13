#include <SFML/Graphics.hpp>
#include "Process.cpp"
class VegPizza{


public:
    VegPizza(){

    }
    Process CutIngredients(){
        Process cut("Cut Ingredients",200,"Vegetarian");
        return cut;
    }
    Process PrepareTheDough(){
        Process pdt("Prepare The Dough",300,"Vegetarian");
        return pdt;
    }
    Process TomatoSauce(){
        Process ts = Process("Tomato Sauce",100,"Vegetarian");
        return ts;
    }

    Process PlaceChesse(){
        Process pc=Process("Place Cheese",100,"Vegetarian");
        return pc;
    }
    Process cook(){
        Process c = Process("Cook Pizza",300,"Vegetarian");
        return c;
    }
    Process PlaceVeg(){
        Process pp= Process("Special Ingredients",100,"Vegetarian");
        return pp;
    }
};
