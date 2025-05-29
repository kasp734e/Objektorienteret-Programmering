#pragma once
#include "Amplifier.h"
//Opgave 3 c)

class NarrowBandAmplifier : public Amplifier {
  private:
    double amplification;
    double upperFrequencyLimit;
    double lowerFrequencyLimit;

  public:
    NarrowBandAmplifier(double amplification, double upperFrequencyLimit, double lowerFrequencyLimit);
    void amplify(Signal& signal) override;
};