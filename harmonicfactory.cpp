#include "harmonicfactory.h"
#include "harmoniccontroller.h"

namespace factories {

HarmonicFactory::HarmonicFactory()
{

}

controllers::BaseController* HarmonicFactory::createController(double deltaTime, double duration)
{
    return new controllers::HarmonicController(deltaTime, duration);
}

} // namespace factories
