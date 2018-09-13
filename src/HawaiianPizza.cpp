//
// Created by gaburolo on 05/09/18.
//



#include "Process.cpp"
#include <SFML/Graphics.hpp>
class HawaiianPizza {

public:
    HawaiianPizza(){

    }
    Process CutIngredients(){
        Process  cutI("Cut Ingredients",200,"Hawaiian");
        return  cutI;

    }
    Process PrepareTheDough(){
        Process  ptd("Prepare The Dough",300,"Hawaiian");
        return  ptd;

    }
    Process TomatoSauce(){
        Process ts= Process("Tomato Sauce",100,"Hawaiian");
        return ts;
    }
    Process PlaceCheese(){
        Process pc=Process("Place Cheese",100,"Hawaiian");
        return pc;
    }
    Process Cook(){
        Process c= Process("Cook Pizza",300,"Hawaiian");
        return c;
    }
    Process PlacePineapple(){
        Process pp= Process("Place Pineapple",100,"Hawaiian");
        return pp;
    }

};