#ifndef HARMONICMOTIONDATAGENERATOR_H
#define HARMONICMOTIONDATAGENERATOR_H
#include "DataGenerator.h"

class HarmonicMotionDataGenerator : public DataGenerator {
    double amplitude;
    double ciclicFrequency;
    double phase;
    double x;

public:
    HarmonicMotionDataGenerator(double);

    void setAmplitude(double);
    void setCiclicFrequency(double);
    void setPhase(double);
    void setX(double);

    double getAmplitude();
    double getCiclicFrequency();
    double getPhase();
    double getX();

    void compute() override;
     ~HarmonicMotionDataGenerator();
};
#endif // HARMONICMOTIONDATAGENERATOR_H
