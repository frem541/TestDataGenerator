#include "planevalidator.h"

bool PlaneValidator::validateFuelLevel(double fuelLevel)
{
    return fuelLevel >= _minFuelLevel && fuelLevel <= _maxFuelLevel;
}

bool PlaneValidator::validateAltitude(double altitude)
{
    return altitude >= _minAltitude && altitude <= _maxAltitude;
}

bool PlaneValidator::validateAttackAngle(double attackAngle)
{
    return attackAngle >= _minAttackAngle && attackAngle <= _maxAttackAngle;
}
