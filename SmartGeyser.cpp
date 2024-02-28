#include <iostream>
#include <string>
#include <conio>

class HomeOwner{
public:
    char name[50];
};

class EnvironmentSensor{
public:
    char season[20];
    double temperature;
};

class WaterHeater{
public:
    bool heating;
};

class SmartGeyser{
public:
    HomeOwner owner;
    EnvironmentSensor sensor;
    WaterHeater heater;

    void activateGeyser(){
    if(sensor.temperature<20 && sensor.season == "winter"){
        heater.heating = true;
        cout<<"Geyser is activated."<<
    }
    else{

        cout<<"Geyser is not activated"
    }
    }
};

int main()
{
    SmartGeyser geyser;
    strcpy(geyser.owner.name, "Vishnu");
    strcpy(geyser.sensor.season, "Winter");
    geyser.sensor.temperature = 15.0;

    geyser.activateGeyser();
    return 0;
}
