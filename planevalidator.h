#ifndef PLANEVALIDATOR_H
#define PLANEVALIDATOR_H

#include "validator.h"

class PlaneValidator : public Validator
{
    const double _maxFuelLevel = -1;
    const double _minFuelLevel = -1;
    const double _maxAltitude = -1;
    const double _minAltitude = -1;
    const double _maxAttackAngle = -1;
    const double _minAttackAngle = -1;
public:
    bool validateFuelLevel(double fuelLevel);
    bool validateAltitude(double altitude);
    bool validateAttackAngle(double attackAngle);
};

#endif // PLANEVALIDATOR_H
