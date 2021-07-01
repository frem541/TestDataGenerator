#ifndef CARVALIDATOR_H
#define CARVALIDATOR_H

#include "validator.h"

class CarValidator : public Validator
{
private:
    const double _maxFuelLevel = 50;
    const double _minFuelLevel = 1;
    const double _maxSpeed = 200;
    const double _minSpeed = 0;
    const double _maxEngineTemperature = 115;
    const double _minEngineTemperature = -25;
    const double _maxEngineRPM = -1;
    const double _minEngineRPM = -1;
public:
    bool validateFuelLevel(double fuelLevel);
    bool validateSpeed(double speed);
    bool validateEngineTemperature(double engineTemperature);
    bool validateEngineRPM(double engineRPM);
};

#endif // CARVALIDATOR_H
