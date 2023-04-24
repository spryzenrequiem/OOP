#include <iostream>
#include "CoffeeCondimentDecorator.h"

using namespace std;

class WithWhip : public CoffeeCondimentDecorator{
    private:
        Coffee* myCoffee;

    public:
        WithWhip(Coffee* aCoffee) : myCoffee(aCoffee){

        }

        string getDescription() const override{
            return this->myCoffee->getDescription() + ", Whip";
        }

        double cost() const override{
            return this->myCoffee->cost() + 0.10;
        }
};
