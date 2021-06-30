#define HARMONIC 1
#include "harmonicdata.h"
#include "iostream"

HarmonicData::HarmonicData(int count)
{
    identity = HARMONIC;
    phaseData = new QVector<double>;
    phaseData->reserve(count);
}

void HarmonicData::collect(HarmonicMotionDataGenerator* generator)
{
    phaseData->push_back(generator->getX());
}
