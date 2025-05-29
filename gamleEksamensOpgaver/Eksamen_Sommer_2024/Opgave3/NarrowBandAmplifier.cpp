//Opgave 3 e)
#include "NarrowBandAmplifier.h"

NarrowBandAmplifier::NarrowBandAmplifier(double amplification, double upperFrequencyLimit, double lowerFrequencyLimit) : amplification{amplification}, upperFrequencyLimit{upperFrequencyLimit}, lowerFrequencyLimit{lowerFrequencyLimit} {}

void NarrowBandAmplifier::amplify(Signal& signal) {
  for (auto &i : signal.signalComponents) {
    if ((i.get_frequency()>lowerFrequencyLimit) && (i.get_frequency()<upperFrequencyLimit)) {
      i.amplify(amplification);
    }
  }
}