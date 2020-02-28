#include <iostream>
#include <vector>
#include <string>
#include <iosfwd>
#include "Merchants.h"
using namespace std;

#ifndef Dish_h
#define Dish_h

class Dish: public Merchants{
    private:
        float item_price;
        float my_dish;
        int quantity;
        std::vector<float> pay;
        std::vector<string> restauranthistory;
        std::vector<string> foodhistory;

    public:
        Dish();

        Dish(float user_food):Merchants(user_food){

        };

        ~Dish();

        void set_Thai(int, int);//Thai Food
        void set_Chinese(int, int);//Chinese Food
        void set_Pizza(int, int);//Pizza
        void set_Tacos(int, int);//Tacos
        float get_price();//sum price
        void get_history();//file buffer --> outcome going to be stored in a text file
};

#endif