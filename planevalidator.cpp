#include "planevalidator.h"

bool PlaneValidator::validateFuelLevel(double fuelLevel)
{
    return fuelLevel >= _MIN_FUEL_LEVEL && fuelLevel <= _MAX_FUEL_LEVEL;
}

bool PlaneValidator::validateAltitude(double altitude)
{
    return altitude >= _MIN_ALTITUDE && altitude <= _MAX_ALTITUDE;
}

bool PlaneValidator::validateAttackAngle(double attackAngle)
{
    return attackAngle >= _MIN_ATTACK_ANGLE && attackAngle <= _MAX_ATTACK_ANGLE;
}
