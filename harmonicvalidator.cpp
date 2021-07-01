#include "harmonicvalidator.h"

bool HarmonicValidator::validateCyclicFrequency(double cyclicFrequency)
{
    return cyclicFrequency > 0;
}

bool HarmonicValidator::validateAmplitude(double amplitude)
{
    return amplitude > 0;
}
