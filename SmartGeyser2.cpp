#include <iostream>
#include <conio>

class HomeOwner {
public:
    char name[50];

    void getOutOfBed() {
        cout << name << " gets out of bed.\n";
    }
};

class TemperatureSensor {
public:
    double getCurrentTemperature()
    {
        return 18.0;
    }
};

class HeatingSystem {
public:
    double calculateRequiredTemperature(double currentTemperature) {
        return currentTemperature + 10.0;
    }
};

class SmartGeyser {
private:
    HomeOwner owner;
    TemperatureSensor sensor;
    HeatingSystem heater;

public:
    SmartGeyser(const char* ownerName) {
        strcpy(owner.name, ownerName);
    }

    void activateGeyser() {
        owner.getOutOfBed();
        double currentTemperature = sensor.getCurrentTemperature();
        double requiredTemperature = heater.calculateRequiredTemperature(currentTemperature);
        cout << "Heating temperature calculated and it is " << requiredTemperature << " degree Celsius.\n";
        cout << "Geyser activated. " << owner.name;
    }
};

int main()
{
    SmartGeyser geyser("Vishnu");
    geyser.activateGeyser();
    return 0;
}
