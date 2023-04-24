#include <iostream>

#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"

using namespace std;

int main()
{
    WeatherData weatherData;

    CurrentConditionsDisplay currentConditionsDisplay(&weatherData);

    while(true){ 
        float temperature,humidity;
        cin>>temperature>>humidity;
        weatherData.setMeasurements(temperature, humidity);
    }

    return 0;
}
