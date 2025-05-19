#include "signal.h"

std::string signal::to_string() {
    std::string text;
    text = "Amplitude: " + std::to_string(this->amplitude) + "Frequency: " + std::to_string(this->frequency);
}