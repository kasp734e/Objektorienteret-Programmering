#pragma once
#include "logger.h"
#include "signal.h"
class sensor {
    private:
    logger log;

    public:
        void detect(Ssignal s);
};