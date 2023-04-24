#include <iostream>
#include "Coffee.h"

#ifndef COFFEECONDIMENTDECORATOR_H
#define COFFEECONDIMENTDECORATOR_H


using namespace std;

class CoffeeCondimentDecorator : public Coffee{
    public:
        virtual ~CoffeeCondimentDecorator() = default;

        virtual string getDescription() const = 0;
};

#endif // COFFEECONDIMENTDECORATOR_H
