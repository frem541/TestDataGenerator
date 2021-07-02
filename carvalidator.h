#ifndef CARVALIDATOR_H
#define CARVALIDATOR_H

#include "validator.h"

class CarValidator : public Validator
{
private:
    static constexpr double _MAX_FUEL_LEVEL  = 50;
    static constexpr double _MIN_FUEL_LEVEL = 1;
    static constexpr double _MAX_SPEED = 200;
    static constexpr double _MIN_SPEED = 0;
    static constexpr double _MAX_ENGINE_TEMPERATURE = 115;
    static constexpr double _MIN_ENGINE_TEMPERATURE = -25;
    static constexpr double _MAX_ENGINE_RPM = -1;
    static constexpr double _MIN_ENGINE_RPM = -1;
public:
    static bool validateFuelLevel(double fuelLevel);
    static bool validateSpeed(double speed);
    static bool validateEngineTemperature(double engineTemperature);
    static bool validateEngineRPM(double engineRPM);
};

#endif // CARVALIDATOR_H
