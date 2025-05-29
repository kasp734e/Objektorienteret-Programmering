#pragma once
#include "Amplifier.h"
#include "Signal.h"
//Opgave 3 b)

class BroadBandAmplifier : public Amplifier {
  private:
    double amplification;

  public:
    BroadBandAmplifier(double amplification);
    void amplify(Signal& signal) override;
};