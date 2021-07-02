#include "harmonicmotionvalidator.h"

bool HarmonicMotionValidator::validateCyclicFrequency(double cyclicFrequency)
{
    return cyclicFrequency > 0;
}

bool HarmonicMotionValidator::validateAmplitude(double amplitude)
{
    return amplitude > 0;
}
