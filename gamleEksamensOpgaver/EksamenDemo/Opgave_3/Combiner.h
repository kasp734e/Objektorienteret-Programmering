#pragma once
#include <vector>
#include "Transformer.h"
//Opgave f)

class combiner : public transformer {
    private:
        std::vector<transformer*> transformers;

    public:
        combiner() = default;
        void add(transformer* t);
        point transform(const point& p) override;
};
