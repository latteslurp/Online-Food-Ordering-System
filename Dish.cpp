#include "Merchants.h"
#include "Dish.h"

Dish::Dish(){
    item_price = 0.0;
    my_dish = 0.0;
    quantity = 0;
}

/*Dish::Dish(float total_price){
    item_price = total_price;
}*/

Dish::~Dish(){
}

void Dish::set_Thai(int user_food, int user_amount){
    float padthai = 7.5;
    float curry = 10;

    restauranthistory.push_back("Thai Food");

    while (true)
    {
        if(user_food == 1|2)
        {
            if (user_amount > 0)
            {
                switch(user_food)
                {
                    case 1:
                    {
                        quantity = user_amount;
                        my_dish = quantity*padthai;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Padthai");
                        break;
                    }
                    case 2:
                    {
                        quantity = user_amount;
                        my_dish = quantity*curry;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Curry");
                    }
                }
                break;
            }
            else
            {
                while(user_amount <= 0)
                {
                    cout<<"Not enough quantity. (Please add quantity)\n";
                    cin>>user_amount;

                    if (user_amount>0)
                    {
                        break;
                    }
                }
            }
        }
    }
}


void Dish::set_Chinese(int user_food, int user_amount){
    float chicken = 5.5;
    float bokchoy = 7.5;

    restauranthistory.push_back("Chinese Food");


        while (true)
    {
        if(user_food == 1|2)
        {
            if (user_amount > 0)
            {
                switch(user_food)
                {
                    case 1:
                    {
                        quantity = user_amount;
                        my_dish = quantity*chicken;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Chicken");
                        break;
                    }
                    case 2:
                    {
                        quantity = user_amount;
                        my_dish = quantity*bokchoy;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Bokchoy");
                    }
                }
                break;
            }
            else
            {
                while(user_amount <= 0)
                {
                    cout<<"Not enough quantity. (Please add quantity)\n";
                    cin>>user_amount;

                    if (user_amount>0)
                    {
                        break;
                    }
                }
            }
        }
    }
}

void Dish::set_Pizza(int user_food, int user_amount){
    float cheese = 4.5;
    float tuna = 5.5;

    restauranthistory.push_back("Pizza");

    while (true)
    {
        if(user_food == 1|2)
        {
            if (user_amount > 0)
            {
                switch(user_food)
                {
                    case 1:
                    {
                        quantity = user_amount;
                        my_dish = quantity*cheese;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Cheese Pizza");
                        break;
                    }
                    case 2:
                    {
                        quantity = user_amount;
                        my_dish = quantity*tuna;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Tuna Pizza");
                    }
                }
                break;
            }
            else
            {
                while(user_amount <= 0)
                {
                    cout<<"Not enough quantity. (Please add quantity)\n";
                    cin>>user_amount;

                    if (user_amount>0)
                    {
                        break;
                    }
                }
            }
        }
    }

}

void Dish::set_Tacos(int user_food, int user_amount){
    float sandwich = 5;
    float fishtaco = 2.5;

    restauranthistory.push_back("Tacos");
    
    while (true)
    {
        if(user_food == 1|2)
        {
            if (user_amount > 0)
            {
                switch(user_food)
                {
                    case 1:
                    {
                        quantity = user_amount;
                        my_dish = quantity*sandwich;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Cubano Sandwich");
                        break;
                    }
                    case 2:
                    {
                        quantity = user_amount;
                        my_dish = quantity*fishtaco;
                        pay.push_back(my_dish);
                        foodhistory.push_back("Fish Taco");
                    }
                }
                break;
            }
            else
            {
                while(user_amount <= 0)
                {
                    cout<<"Not enough quantity. (Please add quantity)\n";
                    cin>>user_amount;

                    if (user_amount>0)
                    {
                        break;
                    }
                }
            }
        }
    }

}

float Dish::get_price(){
    for (unsigned int i = 0; i < pay.size(); i++)
    {
        item_price += pay[i];
    }
    return item_price;
}

void Dish::get_history()
{
    for(unsigned int i = 0; i < restauranthistory.size(); i++)
    {
        cout<<restauranthistory[i]<<"\n";
        for (unsigned int i = 0; i < pay.size(); i++)
        {
            cout<<foodhistory[i]<<" $"<<pay[i]<<"\n"
            <<"\nTotal: "<<" $"<<item_price<<endl;
        }
    }
}