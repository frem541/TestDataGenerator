#ifndef CONTROLLERS_HARMONICCONTROLLER_H
#define CONTROLLERS_HARMONICCONTROLLER_H

#include "basecontroller.h"
#include "harmonicdata.h"
#include "HarmonicMotionDataGenerator.h"


namespace controllers {

class HarmonicController : public BaseController
{
private:
    HarmonicData* _data;
    HarmonicMotionDataGenerator* _generator;
    void simulate() override;
public:
    HarmonicController(double, double);
    Data* collectData() override;
};

} // namespace Controllers

#endif // CONTROLLERS_HARMONICCONTROLLER_H
