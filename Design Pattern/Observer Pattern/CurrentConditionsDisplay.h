#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"

using namespace std;

class CurrentConditionsDisplay : public Observer, public DisplayElement{
    private:
        float temperature;
        float humidity;
        Subject* weatherData;

    public:
        CurrentConditionsDisplay(Subject* weatherData){
            this->weatherData = weatherData;
            weatherData->registerObserver(this);
        }

        void update(Subject* s) override{
            this->temperature = s->getTemp();
            this->humidity = s->getHumid();
            this->display();
        }

        void display(){
            cout << "Current Temperature: " << this->temperature << " F_degree" << endl;
            cout << "Current Humidity: " << this->humidity << "%" << endl;
        }
};
