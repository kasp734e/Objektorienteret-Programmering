#include "Combiner.h"
// Opgave g-1)

void combiner::add(transformer* t) {
    this->transformers.push_back(t);
}

point combiner::transform(const point& p) {

    point nyP = p;

    for (transformer* t : transformers) {
        nyP = t->transform(nyP);
    }
    return nyP;
}