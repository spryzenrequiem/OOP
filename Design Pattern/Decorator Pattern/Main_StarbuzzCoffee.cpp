#include <iostream>

#include "Espresso.h"
#include "HouseBlend.h"
#include "WithMocha.h"
#include "WithWhip.h"
#include "WithSoy.h"

using namespace std;

int main()
{
    Coffee* coffee_1 = new Espresso();
    cout <<  coffee_1->getDescription() << " $" << coffee_1->cost() << endl;
    delete coffee_1;

    Coffee* coffee_2 = new Espresso();
    coffee_2 = new WithMocha(coffee_2); // wrap coffee_2 with Mocha
    coffee_2 = new WithMocha(coffee_2); // then wrap that coffee_2 in a second Mocha
    coffee_2 = new WithWhip(coffee_2); // then wrap that coffee_2 in a Whip
    cout << coffee_2->getDescription() << " $" << coffee_2->cost() << endl;
    delete coffee_2;

    Coffee* coffee_3 = new HouseBlend();
    coffee_3 = new WithSoy(coffee_3);
    coffee_3 = new WithMocha(coffee_3);
    coffee_3 = new WithWhip(coffee_3);
    cout << coffee_3->getDescription() << " $" << coffee_3->cost() << endl;
    delete coffee_3;
}
