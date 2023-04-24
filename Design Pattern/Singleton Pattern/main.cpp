#include <iostream>
#include "Singleton.h"

using namespace std;

int main()
{
    Singleton &singleton_1 = Singleton::getInstance();

    singleton_1.data = 20;

    cout << "single_1 data = " << singleton_1.data << endl;

    Singleton &singleton_2 = Singleton::getInstance();

    cout << "single_2 data = " << singleton_2.data << endl;

    Singleton::getInstance().data = 50;

    cout << "data: " << Singleton::getInstance().data << endl;

    cout << "single_1 data = " << singleton_1.data << endl;
    cout << "single_2 data = " << singleton_2.data << endl;

//    Singleton singleton_N = singleton_1; // copy constructor
//    singleton_N.data = 100;
//
//    cout << "single_1 data = " << singleton_1.data << endl;
//    cout << "single_N data = " << singleton_N.data << endl;
}
