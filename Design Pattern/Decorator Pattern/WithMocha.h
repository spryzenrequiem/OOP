#include <iostream>
#include "CoffeeCondimentDecorator.h"

using namespace std;

class WithMocha : public CoffeeCondimentDecorator{
    private:
        Coffee* myCoffee;

    public:
        WithMocha(Coffee* aCoffee) : myCoffee(aCoffee){

        }

        string getDescription() const override{
            return this->myCoffee->getDescription() + ", Mocha";
        }

        double cost() const override{
            return this->myCoffee->cost() + 0.20;
        }
};
