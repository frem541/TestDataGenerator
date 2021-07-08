#ifndef CARVALIDATOR_H
#define CARVALIDATOR_H

#if defined(VALIDATORS_LIBRARY)
#  define CAR_VALIDATORS_EXPORT Q_DECL_EXPORT
#else
  #define CAR_VALIDATORS_EXPORT Q_DECL_IMPORT
#endif

#include "validator.h"

class CAR_VALIDATORS_EXPORT CarValidator : public Validator
{
private:
    static constexpr double _MAX_FUEL_LEVEL  = 50;
    static constexpr double _MIN_FUEL_LEVEL = 1;
    static constexpr double _MAX_SPEED = 200;
    static constexpr double _MIN_SPEED = 0;
    static constexpr double _MAX_ENGINE_TEMPERATURE = 115;
    static constexpr double _MIN_ENGINE_TEMPERATURE = -25;
    static constexpr double _MAX_ENGINE_RPM = 8000;
    static constexpr double _MIN_ENGINE_RPM = 500;
public:
    static bool validateFuelLevel(double fuelLevel);
    static bool validateSpeed(double speed);
    static bool validateEngineTemperature(double engineTemperature);
    static bool validateEngineRPM(double engineRPM);
};

#endif // CARVALIDATOR_H
