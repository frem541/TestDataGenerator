#ifndef HARMONICVALIDATOR_H
#define HARMONICVALIDATOR_H

#include "validator.h"

class HarmonicValidator : public Validator
{
public:
    bool validateCyclicFrequency(double cyclicFrequency);
    bool validateAmplitude(double amplitude);
};

#endif // HARMONICVALIDATOR_H
