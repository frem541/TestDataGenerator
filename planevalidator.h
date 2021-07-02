#ifndef PLANEVALIDATOR_H
#define PLANEVALIDATOR_H

#include "validator.h"

class PlaneValidator : public Validator
{
    static constexpr double _MAX_FUEL_LEVEL = -1;
    static constexpr double _MIN_FUEL_LEVEL = -1;
    static constexpr double _MAX_ALTITUDE = -1;
    static constexpr double _MIN_ALTITUDE = -1;
    static constexpr double _MAX_ATTACK_ANGLE = -1;
    static constexpr double _MIN_ATTACK_ANGLE = -1;
public:
    static bool validateFuelLevel(double fuelLevel);
    static bool validateAltitude(double altitude);
    static bool validateAttackAngle(double attackAngle);
};

#endif // PLANEVALIDATOR_H
