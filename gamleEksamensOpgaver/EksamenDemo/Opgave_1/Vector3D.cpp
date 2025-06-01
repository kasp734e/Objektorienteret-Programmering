#include "Vector3D.h"


// Opgave b-1)
vector_3d::vector_3d(double x, double y, double z) : x_{x}, y_{y}, z_{z} {}
std::string const vector_3d::to_string() {
    std::string nyStreng = "(" + std::to_string(x_) + "," + std::to_string(y_) + "," + std::to_string(z_)+")";
    return nyStreng;
}


// Opgave c-1)
vector_3d vector_3d::operator!() const {
    vector_3d nyVec(-this->x_,-this->y_,-this->z_);
    return nyVec;
}

//Opgave d-2)
vector_3d operator+(const vector_3d& vec1, const vector_3d& vec2) {
    vector_3d nyVec(vec1.x_+vec2.x_,vec1.y_+vec2.y_,vec1.z_+vec2.z_);
    return nyVec;
}


//Opgave e-2)
vector_3d operator-(const vector_3d& vec1, const vector_3d& vec2) {
    return vec1+(!vec2);
}