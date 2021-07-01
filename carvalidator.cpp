#include "carvalidator.h"

bool CarValidator::validateFuelLevel(double fuelLevel)
{
    return fuelLevel >= _minFuelLevel && fuelLevel <= _maxFuelLevel;
}

bool CarValidator::validateSpeed(double speed)
{
    return speed >= _minSpeed && speed <= _maxSpeed;
}

bool CarValidator::validateEngineTemperature(double engineTemperature)
{
    return engineTemperature >= _minEngineTemperature && engineTemperature <= _maxEngineTemperature;
}

bool CarValidator::validateEngineRPM(double engineRPM)
{
    return engineRPM >= _minEngineRPM && engineRPM <= _maxEngineRPM;
}
