#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include <vector>
#include "Dish.h"

using namespace std;

int main()
{
    cout<<"Welcome to SANTA FOODEY!\n";
    while(true)
    {
        cout<<"Discover what your tounge needs!\n"
        <<"Mouthgasm awaits ;)\n"
        <<"---------------------------------------------------------\n"
        <<"1. Thai Food\n"
        <<"2. Chinese Food\n"
        <<"3. Pizza\n"
        <<"4. Tacos\n"
        <<endl;

        int user_merchant;
        string exit;//exit "current delivery" cart
        string exit_program;//exit the entire program
        cout<<"(Pick Restaurants)"<<endl;
        cin>>user_merchant;
        Merchants restaurant(user_merchant);
        Dish the_dish;

        switch(restaurant.get_selection())//merchant selection
        {
            int user_food;
            float user_amount;
            case 1:
            {
                cout<<"Thai Food\n"
                <<"--------------------\n"
                <<"1. Padthai ($7.5)\n"
                <<"2. Curry ($10)\n";
                while (exit !="0")
                {
                    cout<<"(please enter \'1\' or \'2\' to select dish)\n";
                    cin>>user_food;
                    if (user_food == 1 | user_food == 2)
                    {
                        cout<<"Enter the amount of dish you wish to order\n";
                        cin>>user_amount;
                        the_dish.set_Thai(user_food, user_amount);
                        cout<<"Enter '0' if you are done with the order.\n"
                        <<"Enter any key to continue add order to your cart\n";
                        cin>>exit;
                    }
                    else
                    {
                        while(user_food != 1 | user_food != 2)
                        {
                            cout<<"Invalid input.\n";
                            break;
                        }
                    }
                }
                
                cout<<"Total in cart: "<<the_dish.get_price()<<"\n"
                <<"Have a good day!\n"<<endl;
                cout<<"Enter \'0\' to exit program.\n"
                <<"(Enter any button to continue occupy the program)\n";
                cin>>exit_program;
                break;
            }

            case 2:
            {
                cout<<"Chinese Food\n"
                <<"--------------------\n"
                <<"1. Chicken ($5.5)\n"
                <<"2. Bokchoy ($7.5)\n";
                while (exit !="0")
                {
                    cout<<"(please enter \'1\' or \'2\' to select dish)\n";
                    cin>>user_food;
                    if (user_food == 1 | user_food == 2)
                    {
                        cout<<"Enter the amount of dish you wish to order\n";
                        cin>>user_amount;
                        the_dish.set_Chinese(user_food, user_amount);
                        cout<<"Enter '0' if you are done with the order.\n"
                        <<"Enter any key to continue add order to your cart\n";
                        cin>>exit;
                    }
                    else
                    {
                        while(user_food != 1 | user_food != 2)
                        {
                            cout<<"Invalid input.\n";
                            break;
                        }
                    }
                }
                cout<<"Total in cart: "<<the_dish.get_price()<<"\n"
                <<"Have a good day!\n"<<endl;
                cout<<"Enter \'0\' to exit program.\n"
                <<"(Enter any button to continue occupy the program)\n";
                cin>>exit_program;
                break;
            }

            case 3:
                cout<<"Pizza\n"
                <<"--------------------\n"
                <<"1. Cheese Pizza ($4.5)\n"
                <<"2. Tuna Pizza ($5.5)\n";
                while (exit !="0")
                {
                    cout<<"(please enter \'1\' or \'2\' to select dish)\n";
                    cin>>user_food;
                    if (user_food == 1 | user_food == 2)
                    {
                        cout<<"Enter the amount of dish you wish to order\n";
                        cin>>user_amount;
                        the_dish.set_Pizza(user_food, user_amount);
                        cout<<"Enter '0' if you are done with the order.\n"
                        <<"Enter any key to continue add order to your cart\n";
                        cin>>exit;
                    }
                    else
                    {
                        while(user_food != 1 | user_food != 2)
                        {
                            cout<<"Invalid input.\n";
                            break;
                        }
                    }
                }
                cout<<"Total in cart: "<<the_dish.get_price()<<"\n"
                <<"Have a good day!\n"<<endl;
                cout<<"Enter \'0\' to exit program.\n"
                <<"(Enter any button to continue occupy the program)\n";
                cin>>exit_program;
                break;

            case 4:
                cout<<"Tacos\n"
                <<"--------------------\n"
                <<"1. Cubano Sandwich ($5)\n"
                <<"2. Fish Taco ($2.5)\n";
                while (exit !="0")
                {
                    cout<<"(please enter \'1\' or \'2\' to select dish)\n";
                    cin>>user_food;
                    if (user_food == 1 | user_food == 2)
                    {
                        cout<<"Enter the amount of dish you wish to order\n";
                        cin>>user_amount;
                        the_dish.set_Tacos(user_food, user_amount);
                        cout<<"Enter '0' if you are done with the order.\n"
                        <<"Enter any key to continue add order to your cart\n";
                        cin>>exit;
                    }
                    else
                    {
                        while(user_food != 1 | user_food != 2)
                        {
                            cout<<"Invalid input.\n";
                            break;
                        }
                    }
                }
                cout<<"Total in cart: "<<the_dish.get_price()<<"\n"
                <<"Have a good day!\n"<<endl;
                cout<<"Enter \'0\' to exit program.\n"
                <<"(Enter any button to continue occupy the program)\n";
                cin>>exit_program;
                break;

            default:
                cout<<"Invalid input\n";
                break;

        }
        ofstream history_order;
        history_order.open("history.txt", ios_base::app);
        if (history_order.is_open())
        {
            history_order<<"Order History\n"
            <<"-------------------\n";
            streambuf *history = cout.rdbuf();/*streambuf: an object that 
            could read and write a file buffer of a "STREAM" object*/
            
            cout.rdbuf(history_order.rdbuf());/*calling the file object 
            (return a pointer to filebuf object)*/
            
            the_dish.get_history();//writing the "order history"
            
            cout.rdbuf(history);//store those into the file (save)
            history_order<<"____________________________________"<<endl;
            history_order.close();
        }
        else
        {
            history_order<<"Unable to open file"<<endl;
        }

        if (exit_program == "0")
        {
            break;
        }
    }



    return 0;
}