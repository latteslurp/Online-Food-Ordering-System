#include "Merchants.h"

Merchants::Merchants(){//Constructor
    the_merchant = 0;
}

Merchants::Merchants(int user_merchant){
    set_selection(user_merchant);
}

Merchants::~Merchants(){//Destructor

}

void Merchants::set_selection(int user_merchant){//Accessor Funtion
    the_merchant = user_merchant; 
}

int Merchants::get_selection(){
    return the_merchant;
}
