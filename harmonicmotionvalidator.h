#ifndef HARMONICMOTIONVALIDATOR_H
#define HARMONICMOTIONVALIDATOR_H

#if defined(VALIDATORS_LIBRARY)
#  define HARMONIC_VALIDATORS_EXPORT Q_DECL_EXPORT
#else
  #define HARMONIC_VALIDATORS_EXPORT Q_DECL_IMPORT
#endif

#include "validator.h"

class HARMONIC_VALIDATORS_EXPORT HarmonicMotionValidator : public Validator
{
public:
    static bool validateCyclicFrequency(double cyclicFrequency);
    static bool validateAmplitude(double amplitude);
};

#endif // HARMONICMOTIONVALIDATOR_H
