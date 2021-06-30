#ifndef FACTORIES_HARMONICFACTORY_H
#define FACTORIES_HARMONICFACTORY_H

#include "abstractfactory.h"

namespace factories {

class HarmonicFactory : public AbstractFactory
{
public:
    HarmonicFactory();
    controllers::BaseController* createController(double, double) override;
};

} // namespace factories

#endif // FACTORIES_HARMONICFACTORY_H
