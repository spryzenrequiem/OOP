#include <iostream>
#include "CoffeeCondimentDecorator.h"

using namespace std;

class WithSoy : public CoffeeCondimentDecorator{
    private:
        Coffee* myCoffee;

    public:
        WithSoy(Coffee* aCoffee) : myCoffee(aCoffee){

        }

        string getDescription() const override{
            return this->myCoffee->getDescription() + ", Soy";
        }

        double cost() const override{
            return this->myCoffee->cost() + 0.15;
        }
};
