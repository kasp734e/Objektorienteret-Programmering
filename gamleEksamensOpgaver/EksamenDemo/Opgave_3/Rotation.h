#pragma once
#include "Transformer.h"
#include <cmath>
// Opgave b)
class rotation : public transformer {
    private:
        double angle;
    public:
        rotation(double angle);
        point transform(const point& p) override;
};