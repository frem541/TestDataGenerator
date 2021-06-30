#include "harmoniccontroller.h"

namespace controllers {

HarmonicController::HarmonicController(double deltaTime, double duration)
{
    _count = duration / deltaTime;
    _data = new HarmonicData(_count);
    _generator = new HarmonicMotionDataGenerator(deltaTime);
}

void HarmonicController::simulate()
{
    for(int i = 0; i < _count; i++)
    {
        _generator->compute();
        _data->collect(_generator);
    }
}

Data* HarmonicController::collectData()
{
    simulate();
    return _data;
}

} // namespace Controllers
