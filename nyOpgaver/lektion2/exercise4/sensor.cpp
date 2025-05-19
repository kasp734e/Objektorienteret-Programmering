#include "sensor.h"

void sensor::detect(Ssignal s) {
    this->log.write_ln(s.to_string());
}