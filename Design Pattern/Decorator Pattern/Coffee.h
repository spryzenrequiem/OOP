#include <iostream>
#include <string>

#ifndef COFFEE_H
#define COFFEE_H

using namespace std;

class Coffee{
    protected:
        string description = "Unknown Coffee";

    public:
        virtual ~Coffee() = default;

        virtual double cost() const = 0;

        virtual string getDescription() const{
            return description;
        }
};

#endif // COFFEE_H
