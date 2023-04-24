#include <iostream>
#include "Coffee.h"

class Espresso : public Coffee{
    public:
        Espresso(){
            this->description = "Espresso";
        }

        double cost() const override{
            return 1.99;
        }
};
