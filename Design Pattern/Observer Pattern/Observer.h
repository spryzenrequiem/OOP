#include <iostream>

// Observer.h
#ifndef OBSERVER_H
#define OBSERVER_H


using namespace std;

class Subject;

class Observer{
    public:
        virtual void update(Subject* s) = 0;

        virtual ~Observer(){}
};

#endif // OBSERVER_H
