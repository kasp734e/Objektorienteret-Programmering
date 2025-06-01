#include "Point.h"
#include "Transformer.h"
// opgave 3d

class translation : public transformer {
    private:
        double dx;
        double dy;

    public:
        translation(double dx, double dy);
        point transform(const point& p) override;
};
