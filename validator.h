#ifndef VALIDATOR_H
#define VALIDATOR_H

#include "validators_global.h"

class VALIDATORS_EXPORT Validator
{
public:
    bool compare(double min, double max);
    bool validateTime(double duration, double deltaTime);
};

#endif // VALIDATOR_H
