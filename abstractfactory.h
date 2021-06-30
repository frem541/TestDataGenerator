#ifndef FACTORIES_ABSTACTFACTORY_H
#define FACTORIES_ABSTACTFACTORY_H

#include "basecontroller.h"

namespace factories {

class AbstractFactory
{
public:
    virtual controllers::BaseController* createController(double, double)
    {
        return nullptr;
    }
};
} // namespace Factories

#endif // FACTORIES_ABSTACTFACTORY_H
