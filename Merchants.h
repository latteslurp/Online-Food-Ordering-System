#include <iostream>
using namespace std;

#ifndef Merchants_h
#define Merchants_h

class Merchants
{
    public:
        int the_merchant;

    public:
        Merchants();

        Merchants(int);

        ~Merchants();

        void set_selection(int);
        int get_selection();
};
#endif