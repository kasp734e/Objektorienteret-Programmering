#pragma once
#include <string>
// Opgave a)
class vector_3d {
    //Opgave d-1)
    friend vector_3d operator+(const vector_3d&, const vector_3d&);
    friend vector_3d operator-(const vector_3d&, const vector_3d&);

    private:
        double x_;
        double y_;
        double z_;
    
    public:
        vector_3d(double x, double y, double z);
        vector_3d operator!() const;
        std::string const to_string();
};








//Opgave e-1)