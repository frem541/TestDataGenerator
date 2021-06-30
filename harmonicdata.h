#ifndef HARMONICDATA_H
#define HARMONICDATA_H

#include "data.h"
#include <qvector.h>
#include "HarmonicMotionDataGenerator.h"

struct HarmonicData : public Data
{
    QVector<double>* phaseData;
    HarmonicData(int);
    void collect(HarmonicMotionDataGenerator*);
};

#endif // HARMONICDATA_H
