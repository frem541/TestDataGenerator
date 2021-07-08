#ifndef PLANEVALIDATOR_H
#define PLANEVALIDATOR_H

#include "validator.h"

#if defined(VALIDATORS_LIBRARY)
#  define PLANE_VALIDATORS_EXPORT Q_DECL_EXPORT
#else
  #define PLANE_VALIDATORS_EXPORT Q_DECL_IMPORT
#endif

class PLANE_VALIDATORS_EXPORT PlaneValidator : public Validator
{
    static constexpr double _MAX_FUEL_LEVEL = 20000;
    static constexpr double _MIN_FUEL_LEVEL = 1000;
    static constexpr double _MAX_ALTITUDE = 13000;
    static constexpr double _MIN_ALTITUDE = 1000;
    static constexpr double _MAX_ATTACK_ANGLE = 15;
    static constexpr double _MIN_ATTACK_ANGLE = -15;
public:
    static bool validateFuelLevel(double fuelLevel);
    static bool validateAltitude(double altitude);
    static bool validateAttackAngle(double attackAngle);
};

#endif // PLANEVALIDATOR_H
