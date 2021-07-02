#include "carvalidator.h"

bool CarValidator::validateFuelLevel(double fuelLevel)
{
    return fuelLevel >= _MIN_FUEL_LEVEL && fuelLevel <= _MAX_FUEL_LEVEL;
}

bool CarValidator::validateSpeed(double speed)
{
    return speed >= _MIN_SPEED && speed <= _MAX_SPEED;
}

bool CarValidator::validateEngineTemperature(double engineTemperature)
{
    return engineTemperature >= _MIN_ENGINE_TEMPERATURE && engineTemperature <= _MAX_ENGINE_TEMPERATURE;
}

bool CarValidator::validateEngineRPM(double engineRPM)
{
    return engineRPM >= _MIN_ENGINE_RPM && engineRPM <= _MAX_ENGINE_RPM;
}
