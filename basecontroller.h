#ifndef CONTROLLERS_BASECONTROLLER_H
#define CONTROLLERS_BASECONTROLLER_H

#include "data.h"

namespace controllers {

class BaseController
{
protected:
    int _count;
    virtual void simulate() = 0;
public:
    virtual Data* collectData() = 0;
};

} // namespace Controllers

#endif // CONTROLLERS_BASECONTROLLER_H
