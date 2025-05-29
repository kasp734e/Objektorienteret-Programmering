#include "matrix.h"

Matrix operator+(Matrix m1, Matrix m2) {
  Matrix returMatrix;
  for (int i = 0; i<4; i++) {
    returMatrix.data[i] = m1.data[i] + m2.data[i];  
  }
  return returMatrix;
}

Matrix operator*(double scalar, Matrix m1) {
  Matrix returMatrix;
  for (int i = 0; i<4; i++) {
    returMatrix.data[i] = scalar*m1.data[i];  
  }
  return returMatrix;
}

Matrix operator*(Matrix m1, Matrix m2) {
  Matrix returMatrix;
  returMatrix.data[0] = m1.data[0] * m2.data[0] + m1.data[1] * m2.data[2];
  returMatrix.data[1] = m1.data[0] * m2.data[1] + m1.data[1] * m2.data[3];
  returMatrix.data[2] = m1.data[2] * m2.data[0] + m1.data[3] * m2.data[2];
  returMatrix.data[3] = m1.data[2] * m2.data[1] + m1.data[3] * m2.data[3];
  return returMatrix;
}

bool operator==(Matrix m1, Matrix m2) {
  bool returnBool = true;
  for (int i = 0; i<4; i++) {
    if (!(m1.data[i]==m2.data[i])) {
      returnBool = false;
    }
  }
  return returnBool;
}

std::string Matrix::to_string() {
  std::string returString = "";

  returString = "[" + std::to_string(this->data[0]) + ", " + std::to_string(this->data[1]) + "]\n";
  returString += "[" + std::to_string(this->data[2]) + ", " + std::to_string(this->data[3]) + "]";
  return returString;
}

Matrix::Matrix(double n1,double n2,double n3,double n4) {
  this->data = {n1,n2,n3,n4};
}

Matrix::Matrix() {
  this->data = {0,0,0,0};
}