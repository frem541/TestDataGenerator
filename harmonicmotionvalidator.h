#ifndef HARMONICMOTIONVALIDATOR_H
#define HARMONICMOTIONVALIDATOR_H

#include "validator.h"

class HarmonicMotionValidator : public Validator
{
public:
    static bool validateCyclicFrequency(double cyclicFrequency);
    static bool validateAmplitude(double amplitude);
};

#endif // HARMONICMOTIONVALIDATOR_H
