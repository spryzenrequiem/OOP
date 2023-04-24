#include <iostream>

// Subject.h
#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

using namespace std;

class Subject{
    public:
        virtual void registerObserver(Observer* observer) = 0;

        virtual void removeObserver(Observer* observer) = 0;

        virtual void notifyObservers() = 0;

        virtual ~Subject(){}

        virtual float getTemp()=0;

        virtual float getHumid()=0;

        virtual void setTemp(float temperature)=0;

        virtual void setHumid(float humidity)=0;
};

#endif // SUBJECT_H
