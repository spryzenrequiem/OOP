#include <iostream>
#include "Coffee.h"

class HouseBlend : public Coffee{
    public:
        HouseBlend(){
            this->description = "House Blend Coffee";
        }

        double cost() const override{
            return 0.89;
        }
};
