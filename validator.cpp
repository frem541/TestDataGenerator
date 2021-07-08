#include "validator.h"

bool Validator::compare(double min, double max)
{
    return min < max;
}

bool Validator::validateTime(double duration, double deltaTime)
{
    return duration >= deltaTime;
}
