#pragma once
#include "logger.h"
#include "signal.h"

class sensor {
    private:
    logger* logP;

    public:
    void detect(ssignal signal);
};