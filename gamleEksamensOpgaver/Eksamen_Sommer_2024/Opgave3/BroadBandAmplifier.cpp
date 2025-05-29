//Opgave 3 d)
#include "BroadBandAmplifier.h"
#include "Signal.h"
  BroadBandAmplifier::BroadBandAmplifier(double amplification) : Amplifier(), amplification{amplification} {}
  void BroadBandAmplifier::amplify(Signal& signal) {
    for (auto &i : signal.signalComponents) {
      i.amplify(amplification);
    }
  }