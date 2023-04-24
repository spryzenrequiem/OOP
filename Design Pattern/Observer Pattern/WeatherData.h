#include <iostream>
#include <vector>

#include "Subject.h"

using namespace std;

class WeatherData : public Subject{
    private:
        vector<Observer*> observers;
        float temperature;
        float humidity;

    public:
        WeatherData(){
            this->observers = vector<Observer*>();
        }

        void registerObserver(Observer* o) override{
            observers.push_back(o);
        }

        void removeObserver(Observer* o) override{
            for(auto it = observers.begin(); it != observers.end(); ++it){
                if(*it == o){
                    observers.erase(it);
                    break;
                }
            }
        }

        void notifyObservers() override{
            for(auto anObserver : observers){
                anObserver->update(this);
            }
        }

        void measurementsChanged(){
            this->notifyObservers();
        }

        void setMeasurements(float temperature, float humidity){
            this->temperature = temperature;
            this->humidity = humidity;
            notifyObservers();
        }

        float getTemp()override{return this->temperature;}
        float getHumid()override{return this->humidity;}
        void setTemp(float temperature)override{this->temperature=temperature;}
        void setHumid(float humidity)override{this->humidity=humidity;}
};
