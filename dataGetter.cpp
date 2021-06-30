#include "dataGetter.h"

Data* generateTestData(char id, double deltaTime, double duration)
{
    factories::AbstractFactory* factory;

    switch(id)
    {
    case HARMONIC:
        factory = new factories::HarmonicFactory();
        break;
    default:
        //coming soon...
        factory = nullptr;
    }

    controllers::BaseController* controller = factory->createController(deltaTime, duration);
    return controller->collectData();
}
